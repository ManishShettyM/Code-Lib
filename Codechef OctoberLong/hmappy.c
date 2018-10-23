#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define lli long long int


int main(int argc, char const *argv[])
{
	lli n,m;
	scanf("%lld %lld",&n,&m);

	lli *a = (lli*)malloc(sizeof(lli)*n);

	for (lli i = 0; i < n; ++i)
	{
		scanf("%lld",&a[i]);
	}

	lli *b = (lli*)malloc(sizeof(lli)*n);

	for (lli i = 0; i < n; ++i)
	{
		scanf("%lld",&b[i]);
	}

	//m-1 balloons on most expensive day
	//max(expense = Ai*Bi) -> needs reductions

	lli *product =  (lli*)malloc(sizeof(lli)*n);
	lli max = INT_MIN;
	lli index=0;

	for (lli i = 0; i < n; ++i)
	{
		product[i]=a[i]*b[i];
		if(product[i]>max)
		{
			max=product[i];
			index=i;
		}
	}

	printf("%lld\n",max-(b[index]*(m-1)));

	/*for (lli i = 0; i < n; ++i)
	{
		printf("%lld\n",product[i]);

	}*/








	return 0;
}