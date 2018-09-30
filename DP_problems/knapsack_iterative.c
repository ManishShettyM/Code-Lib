#include<stdio.h>

int max(int a, int b) { return (a > b)? a : b; } 

int knapSack(int w , int wt[], int val[] , int n)
{
	int K[n+1][w+1];

	for(int i=0; i<=n ;i++)
	{
		for(int cap =0; cap<=w; cap++)
		{

			if(i==0 || cap==0)
				K[i][cap]=0;

			//0 indexing in both arrays:
			else if(wt[i-1] <= cap)
			{
				K[i][cap] = max( val[i] + K[i-1][cap - wt[i-1]],
								 K[i-1][cap]
								);
			}

			else
			{
				K[i][cap] = K[i-1][cap];
			}

		}
	}


	return k[n][w];
}












int main() 
{ 
    int val[] = {60, 100, 120}; 
    int wt[] = {10, 20, 30}; 
    int  W = 50; 
    int n = sizeof(val)/sizeof(val[0]); 
    printf("%d", knapSack(W, wt, val, n)); 
    return 0; 
} 