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
    int jacobsthal[25]={ 1, 1, 3, 5, 11,
                        21, 43, 85, 171, 341,
                        683, 1365, 2731, 5461, 10923,
                        21845, 43691, 87381, 174763, 349525,
                        699051, 1398101, 2796203, 5592405, 11184811
                        };
    while(t--)
    {
        int n;
        cin>>n;
        int denom = pow(2,n);
        printf("%d %d ",jacobsthal[n-1],denom);
    }

        
}