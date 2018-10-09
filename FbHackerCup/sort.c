#include<stdio.h>
#include<stdlib.h>

int compare (const char* a, const char* b)
{
	return *(char*)a - *(char*)b;
}

int main(int argc, char const *argv[])
{
	
	char a[5]={'z','c','a','b','r'};

	qsort(a,5,sizeof(char),compare);

	for (int i = 0; i < 5; ++i)
	{
		printf("%c\n",a[i] );
	}


	return 0;
}