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
        lli n;
        cin>>n;

        vector<int> a;
        map<int , int> counter;
        vector<int> numbers;
        for (int i = 1; i <=n; ++i)
        {
            /* code */
        }

        for (int i = 0; i < n; ++i)
        {
            lli temp;
            cin>>temp;

            a.push_back(temp);

            counter[temp]++;

        }

        lli ans=0;
        for (int i = 0; i < n; ++i)//a
        {
            for (int j = i+1; j < n; ++j)//b
            {
                
                cout<<a[i]<<":"<<counter[a[i]]<<" "<<a[j]<<":"<<counter[a[j]]<<endl;

                if(counter[a[i]]>=a[j] && counter[a[j]]>=a[i])
                    ans++;
            }
        }

        cout<<ans<<endl;


        
        
    }
    return 0;
}