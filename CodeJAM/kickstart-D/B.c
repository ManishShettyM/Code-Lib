#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))


typedef struct t
{
	int p;
	int h;
}t;

typedef struct b
{
	int x;
	int y;
}b;



void print_array_towers(t *array, int length)
{
    for (int i = 0; i < length; i++) 
    {
      printf("(%d,%d)\t", array[i].p,array[i].h );
    }

    printf("\n");
}

void print_array_balloons(b *array, int length)
{
    for (int i = 0; i < length; i++) 
    {
      printf("(%d,%d)\t", array[i].x,array[i].y );
    }

    printf("\n");
}



int main() {
	int test, tc;
	

	scanf("%d", &test);
	tc = 1;
	while(tc <= test) 
	{
		//tower info
		int n;
		int p1,p2,a1,b1,c1,m1;
		int h1,h2,a2,b2,c2,m2;
		


		//balloon info
		int k;
		int x1,x2,a3,b3,c3,m3;
		int y1,y2,a4,b4,c4,m4;

		scanf("%d %d",&n,&k);

		
		scanf("%d %d %d %d %d %d", &p1,&p2,&a1,&b1,&c1,&m1);
		scanf("%d %d %d %d %d %d", &h1,&h2,&a2,&b2,&c2,&m2);
		scanf("%d %d %d %d %d %d", &x1,&x2,&a3,&b3,&c3,&m3);
		scanf("%d %d %d %d %d %d", &y1,&y2,&a4,&b4,&c4,&m4);


		t towers[n];
		towers[0].p=p1;
		towers[1].p=p2;
		towers[0].h=h1;
		towers[1].h=h2;

		b balloons[k];
		balloons[0].x=x1;
		balloons[1].x=x2;
		balloons[0].y=y1;
		balloons[1].y=y2;

		for (int i = 2; i < n; ++i)
		{
			towers[i].p = (a1*towers[i-1].p + b1*towers[i-2].p + c1)%m1 + 1;
			towers[i].h = (a2*towers[i-1].h + b2*towers[i-2].h + c2)%m2 + 1;
		}

		for (int i = 2; i < k; ++i)
		{
			balloons[i].x = (a3*balloons[i-1].x + b3*balloons[i-2].x + c3)%m3 + 1;
			balloons[i].y = (a4*balloons[i-1].y + b4*balloons[i-2].y + c4)%m4 + 1;
		}


		//print_array_towers(towers,n);
		//print_array_balloons(balloons,k);

		int ans=0;

		for(int i=0; i<k;i++)
		{
			for(int j=0;j<n;j++)
			{
				int len = abs(towers[j].p - balloons[i].x)+ balloons[i].y;

				//printf("%d\n",len );

				if(len<=towers[j].h)
				{
					//printf("%d\n",i+1);
					ans++;
					break;
				}

			}
		}

		printf("Case #%d: %d\n",tc,ans);


		tc++;
	}

}