#include<stdio.h>

int main(int argc, char const *argv[])
{
	char a[3][10]={"A","B","C"};
	

	for (int i = 0; i < (1<<3); ++i)
	{
		for (int j = 0; j<3; ++j)
		{
			if(i & (1<<j))printf("%s,",a[j]);
		}

		printf("\n");
	}







	return 0;
}	