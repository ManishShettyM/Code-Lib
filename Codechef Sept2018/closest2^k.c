#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);

	int count=0;;

	while(n!=1)
	{
		n=n>>1;
		count++;
	}

	printf("Largest power of 2 less than n:%d\n",1<<count);





	return 0;
}



//Right most bit in n
//n & (-n) 


//n & (n-1)
	//if == 0 => n is power of 2
	//else => has counted one of the ones
		//can be looped until n becomes 0 to count the no of 1s