#include<stdio.h>
#include<stdlib.h>


void main()
{
	int t;
	scanf("%d" , &t);

	while(t--)
	{
		int n;

		int count_of_links[n];

		for(int i=1; i<=n; i++)
		{
			count_of_links[i]=0;	
		}


		int links[n][n];
		for(int i=1; i<=n; i++)
		{
			for(int i=1; i<=n; i++)
			{
				links[i][j]=0;	
			}	
		}


		for(int i=1; i<=n; i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);

			//biderectional
			links[x][y]=1;
			links[y][x]=1;

			count_of_links[x]++;
			count_of_links[y]++;

		}

		for(int x=1; x<=n ;x++)
		{
			if(count_of_links[x]>1)
			{
				
			}

			else
			{
				
			}
		}






	}
}