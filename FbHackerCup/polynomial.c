#include <stdio.h>

void main(int argc, char const *argv[])
{
	int t=0;
	int test=0;
	scanf("%d", &test);

	while(t<test)
	{
		int deg;
		scanf("%d", &deg);
		//printf("%d\n",deg );

		for(int i=0 ; i<=deg; i++)
		{
			int nonsense;
			scanf("%d", &nonsense);
		}

		if(deg==1)
		{
			printf("Case #%d: 1\n",t+1);
			printf("0.0\n");
		}

		else
		{
			printf("Case #%d: 0\n", t+1 );
		}

		t++;
	}

}