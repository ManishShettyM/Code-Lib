#include<stdio.h>


int main(int argc, char const *argv[])
{
	
	int t;
	scanf("%d",&t);

	

	while(t--)
	{
		int last_seen[3]={0,-1,-1}; //bit nibble byte
		long long int pop[3]={1,0,0};
		int n;

		scanf("%d",&n);

		int t; //time
		for (t = 0; t <n ; ++t)
		{
			if(t == (last_seen[0] + 2))
			{
				pop[1]+=pop[0]; //nibble born

				pop[0]=0; //bit dead
				last_seen[1]=t; //nibble last seen updated
			}

			if(t == (last_seen[1] + 8))
			{
				pop[2]+=pop[1]; //bytes born

				pop[1]=0; //nibble dead
				last_seen[2]=t; //byte last seen updated
			}

			if(t == (last_seen[2] + 16))
			{
				pop[0]+=(2*pop[2]); //2 bits born

				pop[2]=0; //byte dead
				last_seen[0]=t; //bit last seen updated
			}

			

		}


		printf("%lld %lld %lld\n",pop[0],pop[1],pop[2]);

	}


	return 0;
}