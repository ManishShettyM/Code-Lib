#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))



/// kindof a knapsack algo


int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

void print_array(int *array, int length)
{
    for (int i = 0; i < length; i++) 
    {
      printf("%d\t", array[i] );
    }

    printf("\n");
}

int main() {
	int t, tc;
	

	scanf("%d", &t);
	tc = 1;
	while(tc <= t) 
	{
		int n,o,d;
		int x1,x2,a,b,c,m,l;

		scanf("%d %d %d", &n ,&o ,&d);
		scanf("%d %d %d %d %d %d %d", &x1,&x2,&a,&b,&c,&m,&l);
		
		int * xarr = (int*)malloc(sizeof(int)*n);
		int sarr[n];

		xarr[0]=x1;
		sarr[0]= xarr[0]+l; // for small l=0 => sarr[i] == xarr[i]
		
		xarr[1]=x2;
		sarr[1]= xarr[1]+l;

		//Xi = (A × Xi - 1 + B × Xi - 2 + C) modulo M, for i = 3 to N.
		//Si = Xi + L, for i = 1 to N.


		//solving for small first

		for (int i = 2; i < n; ++i)
		{
			xarr[i] = (a*xarr[i-1] + b*xarr[i-2] + c)%m;

		}

		//printf("%d\n",maxSubArraySum(xarr,n));

		int ans;
		for(int w=0;w<n;w++)
		{
			ans = maxSubArraySum(xarr,n);
			printf("%d\n",ans );
			
			if(ans>d)
			{
				printf("Entered" );
				xarr= xarr + 1;
				n=n-1;
				w=0;
				print_array(xarr,n);
				
			}
		}

		


		tc++;

	}

	return 0;
}
