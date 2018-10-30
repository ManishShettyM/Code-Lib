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

	int j=0,t,k;

	while(j<=m)
    {
        t=0;
        for(int i=0;i<n;i++)
        {
            if(t<(a[i]*b[i]))
            {
                t=a[i]*b[i];
                k=i;
            }
        }
        
        a[k]=a[k]-1;
        j++;

    }

    printf("%d\n",t);








	return 0;
}