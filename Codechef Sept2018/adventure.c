#include<stdio.h>



int main(int argc, char const *argv[])
{
	
	int t;
	scanf("%d",&t);

	while(t>0)
	{

		//solve => k+=x until k=m => m%
		//pushup => p+=y
		//sharechat => p+=1,k+=1 (max1)

		int n,m,x,y;
		scanf("%d %d %d %d",&n,&m,&x,&y);

		n-=1;
		m-=1;

		if(n==1 && m==1)
		{
			printf("Chefirnemo\n");
		}

		//both need a sharechat
		else if((n%x==1 && m%y==1)||(n%x==0 && m%y==0))
		{
			printf("Chefirnemo\n");
		}

		else
		{
			printf("Pofik\n");
		}

		t--;
	}

}