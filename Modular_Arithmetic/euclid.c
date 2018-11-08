#include<stdio.h>

int gcd_euc(int a , int b)
{
	if(b==0)
		return a;
	else
	{
		return gcd_euc(b,a%b);
	}

}

void main()
{
	int a = 45;
	int b = 10;

	//assume a>b
	printf("%d",gcd_euc(a,b));
}