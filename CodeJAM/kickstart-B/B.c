#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    int data[r];
 
    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, n, r, 0, data, 0);
}
 
/* arr[]  ---> Input Array
   n      ---> Size of input array
   r      ---> Size of a combination to be printed
   index  ---> Current index in data[]
   data[] ---> Temporary array to store current combination
   i      ---> index of current element in arr[]     */
void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    // Current cobination is ready, print it
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ",data[j]);
        printf("\n");
        return;
    }
 
    // When no more elements are there to put in data[]
    if (i >= n)
        return;
 
    // current is included, put next at next location
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);
 
    // current is excluded, replace it with next (Note that
    // i+1 is passed, but index is not changed)
    combinationUtil(arr, n, r, index, data, i+1);
}

int main() {
	int t, tc;
	

	scanf("%d", &t);
	tc = 1;
	while(tc <= t) 
	{
		int n,v1,h1,a,b,c,d,e,f,m;

		scanf("%d %d %d %d %d %d %d %d %d %d",&n,&v1,&h1,&a,&b,&c,&d,&e,&f,&m);

		int A[n][2];
		A[1][0]=v1;
		A[1][1]=h1;

		for(int i=2 ;i<=n;i++)
		{
			A[i][0]= (a*A[i-1][0] + b*A[i-1][1] +c)% m; //Vi

			//printf("%d\n",A[i][0]);

			A[i][1]= (d*A[i-1][0] + e*A[i-1][1] +f)% m;

		}

		

		tc++;
	}
}