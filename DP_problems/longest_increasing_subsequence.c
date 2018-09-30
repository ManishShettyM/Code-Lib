#include<stdio.h>


int lis(int *arr , int n)
{
	int lis[n];

	//int result[n][n];
	//result[0]=arr[0];

	for (int i = 0; i < n; ++i)
	{
		lis[i]=1;
	}

	int max=0; 

	for (int i = 1; i < n; ++i) //lis(i) is lis which ends at ith character
	{
		for(int j=0; j<i ;j++) //so compute lis(i)
		{
			if(arr[i] > arr[j] && lis[i] < lis[j] +1 )
				{
					lis[i] = lis[j] +1;
					//result[i] = 
				}
		}
	}


	//find max in lis() array
	//return that


}

	




int main() 
{ 
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Length of lis is %dn", lis( arr, n ) ); 
    return 0; 
} 