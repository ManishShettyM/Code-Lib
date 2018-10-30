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
        int x,y,z;

        cin>>x>>y>>z;

        if(-x-y-z==0 ||-x-y+z==0 || -x+y-z==0 || -x+y+z==0 ||
            x-y-z==0 ||x-y+z==0 || x+y-z==0 || x+y+z==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
    return 0;
}