#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//given two sequences find longest common sub sequence

//basically you have choice of taking a letter or not 
// no of subsets of a set of cardinality n: 2^n
//naive approach takes exponential time

int max(int a, int b)
{
	return (a>b)?a:b;
}


int lcs(char * x, char *y)
{
	int m= strlen(x);
	int n= strlen(y);

	char * result = (char*)malloc(sizeof(char)*100);
	int k=0;

	int lcs[m+1][n+1];

	for (int i = 0; i <= m; ++i)
	{
		for (int j = 0; j <=n; ++j)
		{
			
			if(i==0 || j==0)
				lcs[i][j]=0;

			else if (x[i-1]==y[j-1])
			{
				lcs[i][j]=1+lcs[i-1][j-1];
			}
			
			else
			{
				lcs[i][j]= max( lcs[i-1][j] ,
								lcs[i][j-1]
								);
			}



		}
	}




	//printf("%s",result);
	return lcs[m][n];

}


void main()
{
	char x[200];	char y[200];
	scanf("%s",x);
	scanf("%s",y);

	printf("%d", lcs(x,y) );
}