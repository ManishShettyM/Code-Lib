#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);

		long long int *a = (long long int*)malloc(sizeof(long long int)*n);
		long long int *b = (long long int*)malloc(sizeof(long long int)*n);

		for(int i=0; i<n ;i++)
		{
			scanf("%lld",&a[i]);
		}

		for(int i=0; i<n ;i++)
		{
			scanf("%lld",&b[i]);
		}


		int count=0;
		for(int i=0; i<n; i++)
		{
			if (i==0)
			{
				if(a[i]>=b[i])count++;
			}

			else
			{
				if(a[i]-a[i-1]>=b[i])count++;
			}
		}

		printf("%d\n",count );



	}



	return 0;
}