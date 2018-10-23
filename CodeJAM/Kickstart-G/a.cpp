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

	int test=1;
	while(t--)
	{
		int n;
		cin>>n;

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		sort(a, a+n); //greatest one = product

		/*for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<endl;
		}*/

		int res=0;
		for(int i = n-1; i >=0 ; i--)
		{
			int j=0;
			int k=i-1; //go till last but greatest
			while(j<k)
			{
				if(a[i]== a[j] * a[k])
				{
					res++;
					j++;
				}

				else if(a[i] > a[j]*a[k])
					j++;

				else
					k--;
			}
		}

		printf("Case #%d: %d\n",test,res);
		test++;
	}
}
