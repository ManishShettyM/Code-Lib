#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		pair< int , pair<int , int > > s[3];
		for (int i = 0; i < 3; ++i)
			{
				cin>>s[i].first>>s[i].second.first>>s[i].second.second;
			}

		sort(s,s+3); //sorts based on only first scores

		int flag=0;
		for (int i = 0; i < 3; ++i)
			{
				if(	s[i].first == s[i+1].first && 
					s[i].second.first == s[i+1].second.first &&
					s[i].second.second == s[i+1].second.second) flag=1;

				if(	s[i].first > s[i+1].first || 
					s[i].second.first > s[i+1].second.first ||
					s[i].second.second > s[i+1].second.second ) flag=1;
			}

		if(flag==0)cout<<"yes"<<endl;
		else cout<<"no"<<endl;


	}
	return 0;
}