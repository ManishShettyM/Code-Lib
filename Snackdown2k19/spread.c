#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		long long int a[n];	

		for (long long int i = 0; i < n; ++i)
		{
			scanf("%lld",&a[i]);
		}


		long long int *cum_sum = (long long int*)malloc(sizeof(long long int)*n);
		cum_sum[0]=a[0];

		printf("%lld\t",cum_sum[0]);

		for (long long int i = 1; i < n ; ++i)
		{
			cum_sum[i]= a[i] + cum_sum[i-1];

			printf("%lld,",cum_sum[i]);
		}

		long long int count =1;
		long long int j=0;

		long long int days=0;

		count=1
		days=0
		while(count<n)
		{

			count = count + cum_sum[count-1]
			days+=1

		}

		printf("%lld\n",days);



		
	}
	return 0;
}