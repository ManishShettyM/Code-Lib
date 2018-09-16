#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troubleSort(int *L, int count);
int firstSortingError(int *L, int count);
void mergesort_alternate(int* A, int n);

int L[100000];
int Buf[100000];

int main() {
	int t, tc;
	int count, i, res;

	scanf("%d", &t);
	tc = 1;
	while(tc <= t) {
		scanf("%d", &count);
		for (i = 0; i < count; ++i) {
			scanf("%d", &L[i]);
		}

		troubleSort(L, count);
		res = firstSortingError(L, count);

		if(res == -1)
			printf("Case #%d: OK\n", tc);
		else
			printf("Case #%d: %d\n", tc, res);
		tc++;
	}
	return 0;
}

void troubleSort(int *L, int count) {
		mergesort_alternate(L, count/2 + count%2);
		mergesort_alternate(L+1, count/2);
}

int firstSortingError(int *L, int count) {
	int i;
	for (i = 0; i < count-1; ++i) {
		if(L[i] > L[i+1]) return i;
	}
	return -1;
}

void mergesort_alternate(int* A, int n) {
    void merge(int* A, int n) {
        int i = 0, j = n/2, k = 0;
        while(i < n/2 && j < n) {
            if(A[i*2] <= A[j*2]) {
                Buf[k*2] = A[i*2];
                k++; i++;
            } else {
                Buf[k*2] = A[j*2];
                k++; j++;
            }
        }
        while(i < n/2) {
            Buf[k*2] = A[i*2];
            k++; i++;
        }
        while(j < n) {
            Buf[k*2] = A[j*2];
            k++; j++;
        }
        for(i = 0; i < n; ++i) {
            A[i*2] = Buf[i*2];
        }
    }
    if(n <= 1) return;
    mergesort_alternate(A, n/2);
    mergesort_alternate(A + (n/2)*2, n - n/2);
    merge(A, n);
}
