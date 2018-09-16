#include <stdio.h>
#include <string.h>

int main() 
{
  int T; scanf("%d", &T);

  for (int id = 1; id <= T; ++id) 
  {
    int A done = 0;
    scanf("%d", &A);
    int I,J;

      for (int i=2; i<1000 ; i++) 
      {
          for(int j=2;j<1000; j++)
          {
            printf("%d%d",i,j);
            scanf("%d%d",I,J);
             fflush(stdout);

            if(I==J==0)
              break;
          }

       
      }

  }
 
  return 0;
}