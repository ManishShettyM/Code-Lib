#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;

void p_vec(vector<vector<int>> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void p_vec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--)
    {
       int n;
       cin>>n;

       int a[n];
       map<int,int> d;
       for (int i = 1; i <=n; ++i)
       {
           cin>>a[i];
           d[a[i]]++;
       }

       /*for(auto elem : d)
      {
         cout << elem.first << ":" << elem.second << endl <<endl; 
      }*/


       map<int ,int> count;

       for (int i = 1; i <=n; ++i)
       {
           count[a[a[i]]]++;

       }

       for(auto elem : d)
      {
         count[a[elem.first]] -= (elem.second-1);
      }

      /*for(auto elem : count)
      {
         cout << elem.first << ":" << elem.second << endl; 
      }*/

      int flag=0;
      for(auto elem : count)
      {
          if(elem.second > 1)
          {
            cout<<"Truly Happy"<<endl;
            flag=1;
            break;
          }
      }

      if(flag==0)
      {
        cout << "Poor Chef"<<endl;
      }

    }
    return 0;
}