#include<stdio.h>
#include<stdlib.h>





void main()
{

	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);

		int a[n];
		int total=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			total+=a[i];
		}


		if(n==3)
		{
			printf("NO\n");
		}

		else if(n==4)
		{
			int count=0;
			for (int i = 0; i < 4; ++i)
			{
				int sum=0;
				for(int j=i; j<n+i;j++)
				{
					sum+=a[i%n];

					if(total-sum==sum)
					{
						printf("SAT");
						count++;
						break;
					}
				}
			}

			if(count==4)
			{
				printf("YES\n");
				for (int i = 0; i < n; ++i)
				{
					printf("%d ",a[i]);
				}
			}


			else
			{
				printf("NO\n");
			}
		}



	}

}