#include<stdio.h>

#define lli long long int


int main(int argc, char const *argv[])
{
	lli t;
	scanf("%lld",&t);


	while(t--)
	{
		lli p1,p2,k;
		scanf("%lld %lld %lld",&p1,&p2,&k);

		//chef always starts

		//collective points =>p1+p2
		//p1+p2/k => no of swaps=n
		//if odd n -> cook
		//if even n-> chef

		if(((p1+p2)/k)%2 == 1)
		{
			printf("COOK\n");
		}

		else
			printf("CHEF\n");
	}


	return 0;
}