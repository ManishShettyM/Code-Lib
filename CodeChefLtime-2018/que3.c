#include <stdio.h>
#include <stdlib.h>

void MergeSort2(long long int **A, long long int n);
void Merge2(long long int **A, long long int n, long long int m);


int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int m,n;
        scanf("%lld %lld",&n,&m);

        long long int** time = (long long int**)malloc(sizeof(long long int*)*n);
        for(long long int j=0;j<n;j++)
        {
            time[j]=(long long int*)malloc(sizeof(long long int)*2);
            scanf("%lld %lld",&time[j][0],&time[j][1]);
        }

        long long int** ppl = (long long int**)malloc(sizeof(long long int*)*m);
        for(long long int j=0;j<m;j++)
        {
            ppl[j]=(long long int*)malloc(sizeof(long long int)*2);
            scanf("%lld",&ppl[j][0]);
            ppl[j][1]=j;
        }

        MergeSort2(ppl,m);
        MergeSort2(time,n);

        long long arr[m];

        long long int ls=0;
        for(long long int j=0;j<m;j++)
        {
            int flag =0;
            long long int h;
            for(h=ls;h<n;h++)
            {
                if(ppl[j][0]<time[h][1])
                {
                    flag=1;
                    ls = h;
                    break;
                }
            }
            if(flag)
            {
                if(time[h][0] <= ppl[j][0])
                    //printf("%d\n",0);
                    arr[ppl[j][1]]=0;
                else
                    //printf("%lld\n",time[h][0]-ppl[j]);
                    arr[ppl[j][1]]=time[h][0]-ppl[j][0];
            }
            else
                //printf("%d\n",-1);
                arr[ppl[j][1]]=-1;
        }

        for(long long int j=0;j<m;j++)
        {
            printf("%lld\n",arr[j]);
        }
        
    }
    
}

void MergeSort2(long long int **A, long long int n)
{
    if(n <= 1) return;

    long long int m = (n/2);

    MergeSort2(A, m);
    MergeSort2(&A[m], n-m);
    Merge2(A, n, m);
}

void Merge2(long long int **A, long long int n, long long int m)
{
    long long int i = 0,j=m,k=0;
    long long int B[n][2]; // variable length array

    while(i < m && j < n)
    {
        if(A[i][0]<= A[j][0])
        {
            B[k][0]= A[i][0];
            B[k][1]=A[i][1];
            i++;
        }
        else
        {
            B[k][0]= A[j][0];
            B[k][1]=A[j][1];
            j++;
        }
        k++;
    }

    if(j == n)
    {
        while(i < m)
        {
            B[k][0]= A[i][0];
            B[k][1]=A[i][1];
            k++;
            i++;
        }
    }
    else
    {
       while(j < n)
        {
            B[k][0]= A[j][0];
            B[k][1]=A[j][1];
            k++;
            j++;
        } 
    }

    for(i = 0; i < n; ++i)
    {
        A[i] [0]= B[i][0];
        A[i][1]=B[i][1];
    }
}
