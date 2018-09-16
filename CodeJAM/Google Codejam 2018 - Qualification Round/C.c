#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char grid[1001][1001]; //will use 1 to 1000

int main() {
	int t, tc;
	int a, i, j;
    int noerror = 1, tries_left, row, doneRow;

	scanf("%d", &t);
	tc = 1;
	while(tc <= t && noerror) {
		scanf("%d", &a);
        for (i = 1; i < 1001; ++i) {
            for (j = 0; j < 1001; ++j) {
                grid[i][j] = 0;
            }
        }

        tries_left = 1000;
        row = 2; //let's fill rows with always 3 columns
        while(noerror && tries_left) {
            //See if one or more rows are done
            while(1) {
                doneRow = 1;
                for (j = 1; j <= 3; ++j) {
                    if(grid[row-1][j] == 0){
                        doneRow = 0;
                        break;
                    }
                }
                if(doneRow) row++;
                else break;
            }

            printf("%d %d\n", row, 2); //always 2nd column
            fflush(stdout);
            tries_left--;

            scanf("%d", &i);
            scanf("%d", &j);
            if((i == -1) && (j == -1))
                noerror = 0; //Error
            if((i == 0) && (j == 0))
                break; //Success
            grid[i][j] = 1;            
        }
		tc++;
	}
	return 0;
}
