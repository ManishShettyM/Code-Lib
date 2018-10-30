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
        int n,m,k,l;
        cin >> n >> m >> k >> l;

        int min_wait_time = m*l;

        std::vector<int> arrival;
        std::vector<int> recieval;
        std::vector<int> wait_times;

        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin>>temp;
            arrival.push_back(temp);
            //recieval.push_back(min_wait_time + (i+1)*l);

        }

        sort(arrival.begin() ,arrival.end());

        for (int i = 0; i < n; ++i)
        {
             if((min_wait_time + (i+1)*l - arrival[i]) >=0 )
            {
                wait_times.push_back(min_wait_time + (i+1)*l - arrival[i]);
            }

            else
            {
                wait_times.push_back(0);
            }
        }

       int maybe = *std::min_element(wait_times.begin() , wait_times.end());
       int ans = min((min_wait_time+(n+1)*l)-k , maybe);

       cout<<ans<<endl;
        




    }
    return 0;
}