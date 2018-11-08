#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>

//int s[n][n];

void printParenthesis( int**s ,int i , int j)
{

	for (int i = 0; i < n+1; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}

	printf("%d %d\n",i,j);
	if(i==j)
		printf("A%d",i);
	else
	{
		int split = s[i][j];

		printf("(");
		printParenthesis(s,i,split);
		printf(")");
		printf("(");
		printParenthesis(s,split+1,j);
		printf(")");
	}
}

void matrix_chain_order(int p[], int n)
{

	int m[n+1][n+1];
	int brackets[n+1][n+1];

	for (int i = 0; i < n+1; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			brackets[i][j]=0;
		}
	}


	for (int i=1; i<=n; i++) 
        m[i][i] = 0; 


	for (int l = 2; l <= n ; ++l)
	{
		for (int i = 1; i <= n-l+1; ++i)
		{
			int j= i+l-1;
			m[i][j] = INT_MAX;

			//choose min in this loop
			for (int k = i; k < j; ++k)
			{
				//possible value for  m[i,j]
				int q = m[i][k] + m[k+1][j] +(p[i-1]*p[k]*p[j]);

				if(q<m[i][j])
				{
					m[i][j]=q;
					brackets[i][j]=k;
				}

			}
		}
	}

	printf("%d\n",m[1][n]);

	for (int i = 0; i < n+1; ++i)
	{
		for (int j = 0; j < n+1; ++j)
		{
			printf("%d ",brackets[i][j]);
		}
		printf("\n");
	}

	printParenthesis((int**)brackets ,1 , n);
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	int p[n+1];
	for (int i = 0; i < n+1; ++i)
	{
		scanf("%d",&p[i]);
	}



	matrix_chain_order(p,n);
	


	return 0;
}