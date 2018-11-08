#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>

using namespace std;

typedef unsigned long long int ull;
typedef long long int lli;

void p_vec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}


int longest_set_of_ones(vector<int> arr, int n , int* end) 
{ 
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (arr[i] == 0)
        {
            if(count > result)
            {
                result = count;
                *(end) = i-1;
            }

            count = 0; 
        }

       
        else
        { 
            count++;//increase count 
        }
    } 


    if(arr[n-1] == 1)
    {
        if(count > result)
        {
            result=count;
            *(end)=n-1;
        }
    }
  
    return result; 
} 




int main(int argc, char const *argv[])
{
    int n,q,k;
    cin>>n>>q>>k;

    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    int end;
    int len = longest_set_of_ones(a,n,&end);
    int start = end - len + 1;
    

    string query;
    cin>>query;


    int l = 0;
    int r = n-1;
    int a_l = a[l];
    int a_r = a[r];

    for (int i = 0; i < q; ++i)
    {

        int flag=0;
        if(query[i] == '!')
        {
            if(a_l==0 && a_r==0)
            {
               start++;
               end++;
            }

            else if(a_l==0 && a_r==1)
            {
               
                if(end == n-1)
                {
                    end--;
                    len--;
                }


            }

            else if(a_l==1 && a_r==0)
            {
                start++;
                end++;
            }

            else if(a_l==1 && a_r==1)
            {
               flag =1;
            }



            //std::rotate(a.rbegin(), a.rbegin() + 1, a.rend());
            if(r==0)
            {
                r = n-1;
                a_r = a[n-1];
                l = 0;
                a_l = a[0];
            }

            else
            {
                a_l = a_r; //left done
                r--;
                a_r = a[r]; //right done

            }



            if(flag==1)
            {
                len = longest_set_of_ones(a,n,&end);
                start = end - len + 1;
            }
            
        }

        else if(query[i]=='?')
        {
            //p_vec(a);

            if(len > k )
                len=k;

            cout<<len<<endl;
        }
        
    }


    return 0;
}