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

		map<string,float> word_sec;
		float sec=0;

		for(int i=0; i<n ;i++)
		{
			string word;
			cin>>word;

			if(word_sec.count(word)>0)
			{
				//cout<<"in the dict"<<endl;
				sec+=(word_sec[word])/2;
			}

			else
			{
				float c_sec=0.2;
				for(int i=0;i<word.length()-1;i++)
				{
					if((word[i]=='d' && word[i+1]=='k') || (word[i]=='d' && word[i+1]=='j'))
					{
						c_sec+=0.2;
					}

					else if((word[i]=='f' && word[i+1]=='k') || (word[i]=='f' && word[i+1]=='j'))
					{
						c_sec+=0.2;
					}

					else if((word[i]=='j' && word[i+1]=='d') || (word[i]=='j' && word[i+1]=='f'))
					{
						c_sec+=0.2;
					}

					else if((word[i]=='k' && word[i+1]=='d') || (word[i]=='k' && word[i+1]=='f'))
					{
						c_sec+=0.2;
					}

					else
					{
						c_sec+=0.4;
					}
				}
				sec+=c_sec;
				word_sec[word]=c_sec;
			}

		}

		cout<<sec*10<<endl;
	}

	return 0;
}