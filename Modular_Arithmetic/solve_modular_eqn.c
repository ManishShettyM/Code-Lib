#include<stdio.h>
#include<stdlib.h>


int compare( int *a , int* b)
{
	return *(a)-*(b);
}


int res[3];

void ext_gcd(int a , int b)
{
	if(b==0)
	{
		res[0]=a;
		res[1]=1;
		res[2]=0;
	}

	else
	{
		ext_gcd(b,a%b);

		int temp = res[1];
		res[1]=res[2];
		res[2]= temp - (a/b)*res[2];

		printf("%d %d %d\n",res[0],res[1],res[2]);
	}
}

//takes care of negative values
int modulo(int a , int n)
{
	return((a%n + n)%n);
}


void solve(int a,int b,int n)
{
	ext_gcd(a,n);
	int d = res[0]; //gcd(a,n)
	int *ans = (int*)malloc(sizeof(int)*d);
	int x;
	if(b%d==0)
	{
		x = modulo( res[1]*(b/d) , n);

		for (int i = 0; i < d ; ++i) // there are d solutions to the eqn
		{
			ans[i] = modulo(x + i*(n/d), n);
		}
		
		qsort(ans,res[0],sizeof(int),compare);
		
		
		printf("%d ",res[0]);
		for (int i = 0; i < d ; ++i) 
		{
			printf("%d ",ans[i]);
		}
		printf("\n");
		
	}
	
	else
	{
	    printf("0\n");
	}
    

}



int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int a,b,n;
		scanf("%d %d %d",&a,&b,&n);
    
	    solve(a,b,n);
		
	}
	return 0;
}