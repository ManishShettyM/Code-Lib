#include <stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void leftRotatebyOne(int arr[], int n)
{
   int temp = arr[0], i;
   for (i = 0; i < n-1; i++)
       arr[i] = arr[i+1];
    
   arr[i] = temp;
}

void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    leftRotatebyOne(arr, n);
}


int gcd (int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

void main()
{
	int test=0;
	scanf("%d",&test);
	int t =0;

	while(t<test)
	{
		int n, k , v;
		scanf("%d %d %d",&n,&k,&v);

		char placesdecreasingpop[n][50];
		int already[n];
		for(int i=0; i < n ; i++)
		{
			scanf("%s" , placesdecreasingpop[i]);
			already[i]=i;
		}

		//It is like a left shift operation with shift value k
		//shorter would be shift gcd of v and k no of times
		int commondiv = gcd(k,v);

		for(int i=0 ; i<commondiv ; i++)
			leftRotate(already, k, n);
		
		//take only first k of the list after sorting
		int a[k];
		for (int j = 0; j < k; j++)
		{
			a[j]=already[j];
		}
		quickSort(a,0,k-1);
		//printArray(a,k);

		printf("Case #%d: ",t+1);
		for(int l=0 ; l<k ; l++)
		{
			int g = a[l];
			printf("%s ",placesdecreasingpop[g] );
		}
		printf("\n");	

		t++;
	}
}
