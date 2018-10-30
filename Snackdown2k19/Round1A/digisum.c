#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define lli long long int


lli digisum(lli n) 
{ 
    lli sum; 
  
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
  
    return sum; 
}







int main(int argc, char const *argv[])
{
	
	int t;
	scanf("%d", &t);

	while(t--)
	{
		lli n,d;
		scanf("%lld %lld",&n,&d);

		lli a[100];
		a[0]=n;

		lli min = 999999999;
		lli count=0;

		for(lli i = 0; i <100; ++i)
		{
			
			lli res = digisum(a[i]);
			
			a[2*i+1] = res; 
			a[2*i+2] = a[i]+d;

			if(a[2*i+1] < a[2*i+2] && a[2*i+1] < min)
			{
				min = a[2*i+1];
				count++;
			}

			else if(a[2*i+2] < a[2*i+1] && a[2*i+2] < min)
			{
				min = a[2*i+2];
				count++;
			}
		

		}

		printf("%lld %lld\n",min,count);

	}

	return 0;
}