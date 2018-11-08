#include<stdio.h>
#include<stdlib.h>


int compare(const void* a , const void* b)
{
	return *(int*)a - *(int*)b;
}

void main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);

		int cost[n];

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&cost[i]);
		}


		qsort(cost,n, (size_t) sizeof(int), compare);

		for (int i = 0; i < n; ++i)
		{
			printf("%d ",cost[i]);
		}

		printf("\n");

		for (int i = 0; i < n; ++i)
		{
			
			if(i==0 && cost[i]!=cost[i+1])
			{
				printf("%d\n",cost[i]);
				break;
			}


			if(i>0)
			{	
				if(cost[i]!=cost[i+1] && cost[i]!=cost[i-1])
				{
					printf("%d\n",cost[i]);
					break;
				}
			}

		}
	}
}