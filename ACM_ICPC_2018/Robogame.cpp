#include <bits/stdc++.h>

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

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // cout << "hello world\n";
        //vector<pair<int,int>> ranges(s.length());
        vector<pair<int, int>> ranges;
        vector<pair<int, int>> vals;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] != '.')
            {
                int val = s[i] - '0';
                int left, right;
                left = i - val;
                right = i + val;
                if (i - val < 0)
                {
                    left = 0;
                }
                if (i + val >= s.length())
                {
                    right = s.length() - 1;
                }

                ranges.push_back(make_pair(left, right));
                vals.push_back(make_pair(val, i));
            }
        }

    
        if (ranges.size() >= 2)
        {
            for (int i = 0; i < ranges.size() - 1; i++)
            {
                for (int j = i + 1; j < ranges.size(); j++)
                {
                        if (ranges[i].second >= ranges[j].first && ranges[i].second <= ranges[j].second)
                        {
                            cout << "unsafe\n";
                            goto flag;
                        }
                    
                }
            }


            for (int i = ranges.size()-1; i >=1; i--)
            {
                for (int j = i - 1; j>=0; j--)
                {
                   
                        if (ranges[i].first >= ranges[j].first && ranges[i].first <= ranges[j].second)
                        {
                            cout << "unsafe\n";
                            goto flag;
                        }
                    

                }
            }


        }
        cout << "safe\n";
    flag:
    ;
        // cout << "\n\n\n";
    }
    return 0;
}
