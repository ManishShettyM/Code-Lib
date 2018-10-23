#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct circle
{
	int cx;
	int cy;
	int r;
}circle;




int main(int argc, char const *argv[])
{
	int n,q;
	scanf("%d %d",&n,&q);

	circle * c = (circle*)malloc(sizeof(circle)*n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d %d",&c[i].cx,&c[i].cy
			,&c[i].r);
	}


	while(q--)
	{
		int k;
		scanf("%d",&k);


	}
	return 0;
}