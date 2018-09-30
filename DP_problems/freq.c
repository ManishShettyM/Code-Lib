#include<stdio.h>

void main()
{
	int n=5;
	int a[5] = { 1, 2, 3, 1 ,3};



	int table[10];
	for (int i = 0; i < 10; ++i)
	{
		table[i]=0;
	}


	for (int i = 0; i < n; ++i)
	{
		table[a[i]]++;
	}


	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t",table[i] );
	}
}