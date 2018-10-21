#include<stdio.h>
#include<stdlib.h>

void main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);

		int max = n+m-2;
		int count=0;

		char a[n][m];
		
		for (int i = 0; i < n; ++i)
		{
			scanf("%s",a[i]);
		}

		for (int i = 0; i < n; ++i)
		{
			scanf("%s",a[i]);
		}

	}
}