#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>

#define mod 1000000007

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

vector<vector<int>> printSums(int N) 
{ 
    vector< vector<int> > ans;

    int start = 1, end = 1; 
    int sum = 1; 
  
    while (start <= N/2) 
    { 
        if (sum < N) 
        { 
            end += 1; 
            sum += end; 
        } 
        else if (sum > N) 
        { 
            sum -= start; 
            start += 1; 
        } 
        else if (sum == N) 
        { 
            std::vector<int> v;
            for (int i = start; i <= end; ++i) 
                 v.push_back(i);
  
            ans.push_back(v);
            sum -= start; 
            start += 1; 
        } 
    } 

    return ans;
} 


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--)
    {
        lli n,k;
        cin>>n>>k;

        vector< vector<int> > v = printSums(n);
        vector< vector<int> > maybe;

        for (int i = 0; i < v.size(); ++i)
        {
            if(v[i].size())
            {
                maybe.push_back(v[i]);
            }
        }

        p_vec(maybe);


    }
    return 0;
}
