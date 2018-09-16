#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void mergesort(int* A, int n, int* Buf);

void troubleSort(int *L, int count) {
	int i, tmp, done = 0;
	while (!done) {
		done = 1;
		for (i = 0; i < count-2; ++i) {
			if(L[i] > L[i+2]) {
				tmp = L[i];
				L[i] = L[i+2];
				L[i+2] = tmp;
				done = 0;
			}
		}
		printf("XX: ");
		for (i = 0; i < count; ++i) {
			printf("%d,", L[i]);
		}
		printf("\n");
	}
}

int firstSortingError(int *L, int count) {
	int i;
	for (i = 0; i < count-1; ++i) {
		if(L[i] > L[i+1]) return i;
	}
	return -1;
}

int main() {
	int t, tc;
	int count, i, res;
	int L[100000];

	time_t time1; //Using time to seed random number in one of the test cases
	srand((unsigned)time(&time1));	
	t=4;//scanf("%d", &t);
	tc = 1;
	while(tc <= t) {
		count = 7-tc; //scanf("%d", &count);
		printf("\nL%d: ", tc);
		for (i = 0; i < count; ++i) {
			L[i] = rand()%10;//scanf("%d", &L[i]);
			printf("%d,", L[i]);
		}
		printf("\n");

		troubleSort(L, count);
		res = firstSortingError(L, count);

		printf("S%d: ", tc);
		for (i = 0; i < count; ++i) {
			printf("%d,", L[i]);
		}
		printf("\n");

		int *Buf = (int*) malloc(count * sizeof(int));
		mergesort(L, count, Buf);
		free(Buf);
		printf("X%d: ", tc);
		for (i = 0; i < count; ++i) {
			printf("%d,", L[i]);
		}
		printf("\n");

		if(res == -1)
			printf("Case #%d: OK\n", tc);
		else
			printf("Case #%d: %d\n", tc, res);
		tc++;
	}
	return 0;
}

void mergesort(int* A, int n, int* Buf) {
    void merge(int* A, int n, int* Buf) {
        int i = 0, j = n/2, k = 0;
        while(i < n/2 && j < n) {
            if(A[i] <= A[j]) {
                Buf[k++] = A[i++];
            } else {
                Buf[k++] = A[j++];
            }
        }
        while(i < n/2) {
            Buf[k++] = A[i++];
        }
        while(j < n) {
            Buf[k++] = A[j++];
        }
        for(i = 0; i < n; ++i) {
            A[i] = Buf[i];
        }
    }
    if(n <= 1) return;
    mergesort(A, n/2, Buf);
    mergesort(A + n/2, n - n/2, Buf);
    merge(A, n, Buf);
}
