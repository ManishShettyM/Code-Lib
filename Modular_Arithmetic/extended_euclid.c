#include<stdio.h>
#include<stdlib.h>


int result[3];
void gcd_ext_euclid(int a, int b)
{
	if(b==0)
	{
		result[0]=a;
		result[1]=1;
		result[2]=0;
	}

	else
	{
		gcd_ext_euclid(b,a%b);

		int temp = result[1];
		result[1]= result[2];
		result[2]= temp - (a/b)*result[2];
	}


}



void main()
{

	gcd_ext_euclid(16,10);
	printf("D:%d x:%d y:%d\n",result[0],result[1],result[2]);
}