#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *num , int a, int b)
{
	char temp = num[a];
	num[a]=num[b];
	num[b]=temp;
}


void fun(char *num)
{
	int evenflag =0;
	int index;

	for (int i = 0; i < strlen(num); ++i)
	{
		if((num[i]-'0')%2==0 )
		{
			index=i;
			evenflag=1;
		}



		if(num[i]-'0'<num[strlen(num)-1]-'0' && evenflag==1)
			break;
	}



	if(evenflag==1)
	{
		swap(num,index,strlen(num)-1);
	}

	printf("%s\n",num);

}

void main()
{
	int t;
	scanf("%d",&t);

	char * num = (char*)malloc(sizeof(char)*1000000);
	while(t--)
	{
		scanf("%s",num);
		fun(num);
	}
}