#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare( const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

int isanagram(char* s1 , char* s2)
{
	qsort(s1,(size_t) strlen(s1), (size_t) sizeof(char), compare);
	qsort(s2,(size_t) strlen(s2), (size_t) sizeof(char), compare);

	int res = strcmp(s1,s2);
	if(res==0)
		return 1;
	else
		return 0;

}

 int main(int argc, char const *argv[])
{
	
	char *string1 = (char*)malloc(sizeof(char)*10);
	char *string2 = (char*)malloc(sizeof(char)*10);

	scanf("%s",string1);
	scanf("%s",string2);

	printf("%d",isanagram(string1,string2));

	return 0;
}