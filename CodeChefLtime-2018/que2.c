#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);

		int d[n];
		int a[n][m];
		int b[n][m];

		//expected final results
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&d[i]);
		}

		//actual time taken
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf("%d",&a[i][j])
			}
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf("%d",&b[i][j])
			}
		}




		//COMPUTATION:
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				
			}
		}


	}
	return 0;
}