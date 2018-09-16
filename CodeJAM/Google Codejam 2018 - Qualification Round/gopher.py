import sys
import random

def gopher():
  

  
  for k in range(3,999):

      if k==3:
        i=10
        j=10
        print(i,j)
      elif I>2 and J+1<999 and J>2 and I+1<999:   
        i = I+1
        j = J+1
        print(i,j)
      else:
        i= random.randint(k-1 , k+1)
        j = random.randint(k-1 , k+1)



      sys.stdout.flush()
      I,J=map(int, input().split())
      

      if I==J==0: return 0;
  


T = int(input())
for i in range(T):
  A = int(input())
  gopher()


  