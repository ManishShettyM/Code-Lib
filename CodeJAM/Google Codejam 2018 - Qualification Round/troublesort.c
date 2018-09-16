#include <stdio.h>
#include <stdlib.h>


int main()
{
	int t;
	scanf("%d",&t);
	//printf("%d",t );
	int curcase=0;

	while(curcase!=t)
	{
		int N;
		scanf("%d",&N);
		int i;
		int j;

		int a[N]; 

	    for(i=0; i<N; i++)
	    {
	        scanf("%d", &a[i]);
	    }


	    int done=0;
	    while(!done)
	    {
	    	done=1;
	    	for (int i = 0; i < N-2; ++i)
	    	{
	    		if(a[i]>a[i+2])
	    		{
	    			done=0;
	    			int temp = a[i];
	    			a[i]=a[i+2];
	    			a[i+2]=temp;
	    		}
	    	}
	    }

    	

		curcase++;

		int ok=1;
		int index=0;

		for(i=0; i<N-1; i++)
	    {
	        if(a[i]>a[i+1])
	        {
	        	index=i;
	        	ok =0;
	        	break;
	        }
	    }


	   if(ok==1)
	    {
	    	printf("Case #%d: OK\n",curcase);
	    }

	   else
	   {
	   		printf("Case #%d: %d\n",curcase,index);
	   }


	}
   


	return 0;
}