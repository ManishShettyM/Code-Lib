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

void p_vec(vector<pair <lli,lli>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first<<":"<<arr[i].second << " ";
    }
    cout << endl;
    cout << endl;
}

bool sort_first(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 

bool sort_second(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.second > b.second); 
} 


int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,k;
        cin>>n>>k;

        vector< pair<lli,lli> > segments;

        for (int i = 0; i < n; ++i)
        {
            lli left,right;
            cin>>left>>right;

            segments.push_back(make_pair(left, right));
            
        }

        vector< pair<lli,lli> > segments_left = segments;
        vector< pair<lli,lli> > segments_right = segments;

        sort(segments_left.begin(),segments_left.end(),sort_first);
        sort(segments_right.begin(),segments_right.end(),sort_second);

        p_vec(segments_left);
        p_vec(segments_right);

        vector< pair<lli,lli> > ans;
        for (int i = 0; i < k; ++i)
        {
            pair<lli,lli> one = segments_left[0];
            pair<lli,lli> two = segments_right[0];

            segments_left.erase(0);
            segments_right.erase(0);

            segments_right.erase(std::remove(segments_right.begin(), segments_right.end(), one), segments_right.end());
            segments_left.erase(std::remove(segments_left.begin(), segments_left.end(), two), segments_left.end());

            p_vec(segments_left);
            p_vec(segments_right);

        }
        

    }
}