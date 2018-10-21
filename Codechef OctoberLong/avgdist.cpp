#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <map>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m;
		cin>>n;
		cin>>m;

		vector <pair<int,int>> coords;
		char str[310];
		for (int i = 0; i < n; ++i)
		{
			cin>>str;

			for(int j=0 ; j< strlen(str); j++)
			{
				if(str[j] =='1')
					coords.push_back(make_pair(i,j));
			}
		}

		int d[n+m+1];
		for(int i=0 ;i<n+m+1 ;i++)
		{
			d[i]=0;
		}

		int limit = coords.size();


		for(int i=0;i<limit;i++)
		{
			for(int j=i+1;j<limit;j++)
			{
				
				d[ abs(coords[i].first - coords[j].first) + abs(coords[i].second - coords[j].second )] +=1;
			}
		}


		for (int i = 1; i <=n+m-2 ; ++i)
		{
			printf("%d ",d[i]);
		}

	}
	return 0;
}