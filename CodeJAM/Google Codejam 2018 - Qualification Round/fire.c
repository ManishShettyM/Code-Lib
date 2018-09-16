#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(char *a, char *b)                                                                                                                                                                       
  {
       if(!a || !b)
           return;

       char temp = *(a);
       *(a) = *(b);
       *(b) = temp;
   }

int main()
{
	int t;
	scanf("%d",&t);
	int curcase=0;

	while(curcase!=t)
	{
		curcase++;

		int d;
		char p[30];
		int a[30];
		int charge=1;
		int damage=0;
		int min=0

		scanf("%d %s",&d,p);
		for (int i = 0; i < strlen(p); ++i)
		{
			
			if(p[i]=='C')
			{
				charge*=2;
				a[i]=charge*1;

			}

			else if(p[i]=='S')
			{
				a[i]=0;
				damage+=charge;
				min++;
			}

		}

		//printf("intial DAMAGE%d\n",damage );

		if(damage<=d)
		{
			printf("Case #%d: 0\n",curcase);
		}

		else if(d<min)
		{
		  printf("Case #%d: IMPOSSIBLE\n",curcase);
		}




		else
		{
			
			int moves=0;
			for (int i = 0; i < strlen(p); i++)
			{
				
				if(p[i]=='C' && p[i+1]=='S')
				{
					damage--;
					moves++;
					swap(&p[i],&p[i+1]);
					//printf("DAMAGE%d\n",damage );

					if(damage<=d)
						break;

				}

			}

			if(moves>0 && damage<=d)
			{
				printf("Case #%d: %d\n",curcase,moves);
			}

			else
				printf("Case #%d: IMPOSSIBLE\n",curcase);


		}


		/*for(int i=0; i<strlen(p); i++)
	    {
	        printf("%d", a[i]);
	    }
	    printf("DAMAGE%d\n",damage );*/



		
	}

return 0;
}
