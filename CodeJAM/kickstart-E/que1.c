#include<stdio.h>
#include<stdlib.h>

void swap(int ptr1, int ptr2 ) 
    {
 
        int temp;
        temp = ptr1;
        ptr1 = ptr2;
        ptr2 = temp;
 
    }

void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is smaller than root
    if (l < n && arr[l] < arr[largest])
        largest = l;
 
    // If right child is smaller than largest so far
    if (r < n && arr[r] < arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}




 int main(int argc, char const *argv[])
{
	
	int t=1;
	int testcases;
	scanf("%d\n",&testcases);

	while(t<=testcases)
	{

		int n;
		int k;

		scanf("%d ",&n);
		scanf("%d\n",&k);

		int *a = (int*)malloc(sizeof(int)*n);
		int *b = (int*)malloc(sizeof(int)*n);

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}


		heapSort(a,n); // a is now in

		int yogcount=0;
		int i=0;
		int j;

		
		for(i=0;i<n;i++)
		{
			//removal of expired
			if(i>=a[i]) *a = &a[i+1];
		

			//eat the next k
			else
			{
				*a=&a[i+k];
				yogcount+=k;
			}
		}

		printf("Ans:%d\n",yogcount);


		t++;
	}




	return 0;
}