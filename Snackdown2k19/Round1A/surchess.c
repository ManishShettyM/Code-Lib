#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define lli long long int


int main(int argc, char const *argv[])
{
	
	int n,m;
	scanf("%d %d",&n,&m);

	char **chessboard =(char **)malloc(sizeof(char*)*n);
	
	for (int i = 0; i < m; ++i)
	{
		chessboard[i]=(char*)malloc(sizeof(char)*m);
	}

	int i,j;
	for (i = 0; i < n; ++i)
	{
		scanf("%s",chessboard[i]);
	}

	/*printf("\n\n\n\n");

	for (i = 0; i < n; ++i)
	{
		printf("%s\n",chessboard[i]);
	}*/


	lli q;
	scanf("%lld",&q);

	while(q--)
	{
		lli c;
		scanf("%lld",&c);

		int i,j;
		int sum[m]; //needs to be n/2 for perfect
		for (int i = 0; i < m; ++i)
		{
			sum[i]=0;
		}

		int val= ceil(n/2);
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				sum[i]+= (chessboard[i][j]-'0');
			}

			//printf("%d:%d\n",i,sum[i]);
		}

		int result=0;

		for (int i = 0; i < m && c>0 ; ++i)
		{
			else if(sum[i]!=val && (sum[i+1]==val || sum[i-1]==val)
			{
				sum[i]
			}
		}



	}


	return 0;
}