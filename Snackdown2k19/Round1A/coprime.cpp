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
		int n;
		cin>>n;

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}

		int c=0;
		for(int i=0; i<n ;i++)
		{
			int flag=0;
			for(int j=0 ;j<n;j++)
			{
				if( __gcd(a[i],a[j])==1 )
				{	
					flag=1;
					break;
				}

			}

			if(flag==0)
			{
				a[i]=47;
				c++;
			}
		}


		cout<<c<<endl;
		for (int i = 0; i < n; ++i)
		{
			printf("%d ",a[i] );
		}

	}


	return 0;
}
