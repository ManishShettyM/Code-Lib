#include<stdio.h>
#include<random.h>



void swap(int *a, int i , int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;

}

//possible permutations are n!

int permute(int *a , int n)
{
	int j;
	for (int i = 0; i < n; ++i)
	{
		j = rand() % n + 1;
		swap(a,i,j);

	}
}




int main(int argc, char const *argv[])
{
	
	int n;
	scanf("%d",&n);

	int *a = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; ++i)
	{
		a[i] = i+1;
	}


}
