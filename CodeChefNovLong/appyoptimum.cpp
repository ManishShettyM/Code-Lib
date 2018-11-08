#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;

void p_vec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}


int* longest_set_of_ones(vector<int> arr, int n , int* index) 
{ 

    int * res = (int*)malloc(sizeof(int)*2);

    int x=0;
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (arr[i] == 0) 
            count = 0; 
  
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        else
        { 
            x++;
            if(count==0) // to return back the starting point
            {
                *(index) = i;
            }

            count++;//increase count 
            result = max(result, count); 
        } 
    } 
  
    res[0]=x;
    res[1]=result;

    return res;
} 




int main(int argc, char const *argv[])
{
    int n,q,k;
    cin>>n>>q>>k;

    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    int x , len , index;

    int* res = longest_set_of_ones(a,n,&index);
    x = res[0];
    len = res[1];

    //some constant shifts will occur 
    if(len == x)


    int mid = x/2;
    int constant_shifts = (n-x+1)-index;
    

    string query;
    cin>>query;


    if(x%2==0)
    {    
            
        for (int i = 0; i < q; ++i)
        {
            int flag=0;
            if(query[i] == '!')
            {
                

            }

            else if(query[i]=='?')
            {
                //if(len > k )
                 //   len=k;

                //cout<<len<<endl;
            }
            
        }

    }


    return 0;
}