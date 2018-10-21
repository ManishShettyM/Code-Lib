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
		long long int a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;

		long long int a_one = __builtin_popcountll(a);
		long long int b_one = __builtin_popcountll(b);

		long long int count=0;
		
		long long int ar[c];
		memset(ar, 0, sizeof(ar));

		for (long long int i = 0; i <=c; ++i)
		{
			if(ar[i]==0)
			{
				ar[i] = __builtin_popcountll(i);
				ar[c-i] = __builtin_popcountll(c-i);
			}

			if(ar[i]==a_one && ar[c-i]==b_one)
			{
				count++;
			}
		}

		cout<<count<<endl;


	}
	return 0;
}