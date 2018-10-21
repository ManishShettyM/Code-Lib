#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct circle
{
	int cx;
	int cy;
	int r;
}circle;


double dist(int a , int b , int c , int d)
{

	return sqrt( pow((c-a),2) + pow((d-b),2) );
}


int main(int argc, char const *argv[])
{
	int n,q;
	scanf("%d %d",&n,&q);

	circle * c = (circle*)malloc(sizeof(circle)*n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d %d",&c[i].cx,&c[i].cy,&c[i].r);
	}


	while(q--)
	{
		int k;
		scanf("%d",&k);

		int count=0;

		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				
				double inter_center = dist(c[i].cx,c[i].cy,c[j].cx,c[j].cy);
				//printf("%lf\n",inter_center );

				double max = c[i].r 
							+ inter_center
							+ c[j].r ;
				double min;

				/* ;*/
				int max_rad_circle= (c[i].r > c[j].r)?i:j ;
				int min_rad_circle= (i==max_rad_circle)?j:i ;


				

				if(inter_center < c[max_rad_circle].r ) //inside other
				{
					min = c[max_rad_circle].r-inter_center-c[min_rad_circle].r;
					//printf("%lf - %lf\n",min , max );
				}

				else if(inter_center <= c[i].r + c[j].r) //intersecting
				{
					
					//printf("case2\n");
					min = 0;
					//printf("%lf - %lf\n",min , max );
				}

				else //seperate
				{
					min = inter_center
							 - c[j].r 
							 - c[i].r ;

					//printf("%lf - %lf\n",min , max );
				}


				if(min<=k  && k<=max)
				{
					count++;
					//printf("%d:%d\n",i,j);
				}			


			}
		}

		printf("%d\n",count);


	}
	return 0;
}