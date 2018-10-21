#include<stdio.h>
#include<math.h>

int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}


int checkSemiprime(int num) 
{ 
    int cnt = 0; 
  
    for (int i = 2; cnt < 2 && i * i <= num; ++i) 
        while (num % i == 0) 
            num /= i, ++cnt; // Increment count 
                             // of prime numbers 
  
    // If number is greater than 1, add it to 
    // the count variable as it indicates the 
    // number remain is prime number 
    if (num > 1) 
        ++cnt; 
  

    // Return '1' if count is equal to '2' else 
    // return '0' 
    return cnt == 2; 
} 


int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);


	
		int i;
		for(i=1 ; i<(n/2)+1 ; i++)
		{
			if(checkSemiprime(i) && checkSemiprime(n-i))
			{
				printf("%d %d\n",i,n-i );
				
				if(isPerfectSquare(i) || isPerfectSquare(n-i))
				{
					//printf("NO\n");
					continue;
				}

				printf("YES\n");
				break;
			}
		}

		if(i==(n/2)+1)
			printf("NO\n");

		



	}

}