#include<stdio.h>



int main(int argc, char const *argv[])
{
	
	int t;
	scanf("%d",&t);

	while(t>0)
	{
		int n,x,s;
		scanf("%d %d %d",&n,&x,&s);

		int a[n];
		for (int i = 1; i <=n; ++i)
		{
			a[i]=0;
			if(i==x)
				a[i]=1;
		}


		for (int i = 0; i < s; ++i)
			{
				int c , d;
				scanf("%d %d",&c,&d);

				if(a[c]!=a[d])
				{
					a[c] = (a[c]==1)?0:1;
					a[d] = (a[d]==1)?0:1;
				}
			}

			for (int i = 1; i <=n; ++i)
		{
			if(a[i]==1)
				{
					printf("%d\n",i);
					break;
				}

		}

	
	t--;
		
	}



	return 0;
}