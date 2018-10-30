#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <map>
#include <vector>
#include <unordered_set>
#include <iterator>



using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		long long int a[n];
		long long partitions=0;

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(i>1)
			{
				if(a[i]<a[i-1])
					partitions++;
			}
		}

		if(partitions==0)
			cout<<"YES"<<endl;

		else if(partitions==1)
		{
			if(a[0] >= a[n-1])
				cout<<"YES"<<endl;

			else
				cout<<"NO"<<endl;
		}

		else
			cout<<"NO"<<endl;


	}
}
