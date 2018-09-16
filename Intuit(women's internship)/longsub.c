#include<stdio.h>
#include<stdlib.h>

int* longsub(int *a , int n )
{

	int *ans = (int*)malloc(sizeof(int)*n);
	

	//min answer is 1 and ans[0]==1 always
	for (int i = 0; i < n; ++i)
	{
		ans[i]=1;
	}


	for (int i = 1; i < n ; ++i) //for every index
	{
		for (int j= 0; j < i; ++j)
		{
			if(a[i]>=a[j] && ans[i]<ans[j]+1) // non decreasing + the longsub value cannot increase
				ans[i]=ans[j]+1;
		}
	}


	return ans;

}


int main(int argc, char const *argv[])
{
	
	int n;
	scanf("%d",&n);


	int *a = (int*)malloc(sizeof(int)*n);
	int *b = (int*)malloc(sizeof(int)*n);


	for (int i = 0; i < n ; ++i)
	{
		scanf("%d",&a[i]);
	}


	b = longsub(a,n);

	for (int i = 0; i < n; ++i)
	{
		printf("%d,",b[i]);
	}

	return 0;
}