#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sumDigits(int no)
{
   
	if(n0%10==9)return-1; //no 9s allowed

   	return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}

int main() {
	int t, tc;
	

	scanf("%d", &t);
	tc = 1;
	while(tc <= t) 
	{
		int f,l;
		scanf("%d %d", &f ,&l);
		tc++;

		int sumf = sumDigits(f);
		int suml = sumDigits(l);

		int total = pow(9,n-1)
		


		

	}
	return 0;
}
