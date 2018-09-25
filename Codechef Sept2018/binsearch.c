#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int binsearch(int *a, int n , int key)
{
	if(n<1)
		return -1;

	int mid = floor(n/2);

	if(a[mid]==key)return mid;

	else if(key < a[mid])binsearch(a,n-mid,key);

	else
		binsearch(a+mid,n-mid,key);

}



void swap(int* a, int leftpointer , int rightpointer)
{
	int temp;
	temp = a[leftpointer];
	a[leftpointer] = a[rightpointer];
	a[rightpointer]=temp;

}

int partition(int *a, int l , int r)
{
	int pivot = a[r];
	int leftpointer = l;
	int rightpointer = r;

	while(1)
	{
		while(a[leftpointer++] < pivot);

		while(rightpointer>0 && a[rightpointer--]> pivot);

		if(leftpointer >= rightpointer) // they crossed so done
			break;

		else
			swap(a,leftpointer,rightpointer);
	}

	swap(a,leftpointer,r); // because we push largest to end

	return leftpointer; //any of the 2

}

void quicksort(int *a, int l , int r)
{

	if(l<r)
	{
		int pivot = partition(a,l,r);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,r);
	}
}


int main(int argc, char const *argv[])
{
	int *a = (int*)malloc(sizeof(int)*9);
	int n =9 ;

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",a[i]);
	}
	//{ 5,6,10,192,36,17,2,0,9};
	


	quicksort(a,0,n-1);

	/*for (int i = 0; i < n; ++i)
	{
		printf("%d\t",a[i]);
	}*/

	/*int key;
	scanf("%d",&key);
	printf("found @:%d\n",binsearch(a,n,key));*/

	return 0;
}	