#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


#define BLANK 0
#define RED 1
#define BLUE 2



int** gravity_to_right(int **grid , int n)
{

	int **newgrid = (int **)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; ++i)
	{
		grid[i] = (int*)malloc(sizeof(int)*n);
	}



	for (int i = 0; i < n; ++i) //every row
	{
		int shiftedj = n-1; //track of free location

		for (int j  = n-1; j>=0; j--) // start at rightmost and push to right
		{
			if (grid[i][j] !=BLANK)
			{
				newgrid[i][shiftedj]=grid[i][j];
				shiftedj--;
			}
		}
	}

	return newgrid;
}

int countpieces(int **grid,int piece,int i, int j, int di, int dj , int n)
{

	int maxpieces =0;
	int counter=0;

	while(i>=0 && i>=0 && i<n && j<n)
	{
		if(grid[i][j] == piece)
		{
			counter++;
			maxpieces = (counter>maxpieces)?counter:maxpieces;
		}

		else
		{
			counter=0;
		}


		i+=di;
		j+=di;
	}

	return maxpieces;
}


bool isWinning(int **grid, int n , int k ,int piece)
{
	for (int i = 0; i < n; ++i)
	{
		//vertical counting => up to down say -> i:col j:row
		if(countpieces(grid,piece,0,i,1,0,n) >=k)
			return true;


		//horizontal => l to r -> i: row j:col
		if(countpieces(grid,piece,i,0,0,1,n ) >=k)
			return true;



		//BL to TR -> split as upper and lower triangle
		if(countpieces(grid,piece,i,0,-1,1,n ) >=k)
			return true;
		if(countpieces(grid,piece,n-1,i,-1,1,n) >=k)
			return true;

		//TL to BR
		if(countpieces(grid,piece,0,i,1,1,n ) >=k)
			return true;
		if(countpieces(grid,piece,i,0,1,1,n) >=k)
			return true;
	}

	return false;
}

int main(int argc, char const *argv[])
{
	int tt;
	scanf("%d",&tt);

	while(tt>0)
	{
			int n,k;
			scanf("%d %d",&n,&k);

			int **grid = (int **)malloc(sizeof(int*)*n);
			for (int i = 0; i < n; ++i)
			{
				grid[i] = (int*)malloc(sizeof(int)*n);
			}



			for (int i = 0; i < n; ++i)
			{
				char line[n];
				scanf("%s",line);

				for (int j = 0; j < n; ++j)
				{
					switch(line[j]){

						case '.':
							grid[i][j]=BLANK;
							break;

						case 'R':
							grid[i][j]= RED;
							break;

						case 'B':
							grid[i][j]=BLUE;
							break;
					}
				}
			}


			//rotate and apply gravity down => apply gravity to the right

			grid = gravity_to_right(grid , n);


			//winner
			bool redhaswon = isWinning(grid,n,k,RED);
			bool bluehaswon = isWinning(grid,n,k,BLUE);



			//results
			char *result = (char*)malloc(sizeof(char)*10);
			if(bluehaswon && redhaswon)
				result="Both";

			else if(bluehaswon)
				result="Blue";
			else if(redhaswon)
				result="Red";
			else
				result="Neither";



			printf("Case #%d: %s\n",tt,result);

			tt--;

	}

	return 0;
}