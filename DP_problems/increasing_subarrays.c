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

		long long int dp[n];
		dp[0]=1; //index represents length of non decreasing segment


		int c=1; //max len till failure
		for (int i = 1; i < n; ++i)
		{
			if(a[i] > a[i-1])
			{
				dp[i] = dp[i-1]+1+c;
				c++;
			}

			else
			{
				dp[i]=dp[i-1]+1;
				c=1;
			}
		}

		printf("%d\n",dp[n-1]);


	}
	return 0;
}