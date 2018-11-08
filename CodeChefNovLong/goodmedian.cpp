#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>

using namespace std;

typedef long long ll;
#define INF 1000000007
 
ll f[1000002];
 
ll pow(ll a, ll b, ll MOD)
{
     ll x=1,y=a; 
     while(b > 0)
        {
            if(b%2 == 1)
            {
                x=(x*y);
                if(x>MOD) x%=MOD;
            }

            y = (y*y);

            if(y>MOD) y%=MOD; 

            b /= 2;
        }

     return x;
}
 
ll InverseEuler(ll n, ll MOD)
{
    return pow(n,MOD-2,MOD);
}


ll C(ll n, ll r, ll MOD)
{
 
 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
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




void solve( int a[] , int n)
{
    int no_of_odd_len = ceil( (float)n/2 );
    int no_of_even_len = n - no_of_odd_len;

    long long odd_ans = pow(2,n-1,INF);
    
    sort(a,a+n);

    map<int,int> count ;
    map<int,int> less_than_equal ;

    std::vector<int> possible_middle;

    for (int i = 0; i < n; ++i)
    {
        count[ a[i] ]++;

        if(less_than_equal[ a[i] ]==0)
            less_than_equal[a[i]] = less_than_equal[a[i]-1]+1;
        else
            less_than_equal[a[i]]++;
    }



   /* for (int i = 0; i < less_than_equal.size(); ++i)
    {
        cout << i << ":" << less_than_equal[i] << " " ;
    }*/

    long long mid_choice = 0;
    for (int i = 0; i < count.size(); ++i)
    {
        if(count[i] > 1)
        {
            mid_choice+=C(count[i],2,INF);
            possible_middle.push_back(i);
        }
    }

    p_vec(possible_middle);


    long long even_ans=0;
  
    for(int m=0 ; m<possible_middle.size() ; m++)
    {
        int mid = possible_middle[m];


        for (int j = 2; j <= no_of_even_len*2; j+=2) //length of subsequence
        {
            
            int less =  less_than_equal[mid]-2;
            int more =   n - less - 2;

            cout << "less:" << less << "mid:" << mid << "more:" << more <<endl;

            long long left = C(less, (j-2)/2, INF); 
            long long right = C(more, (j-2)/2 , INF);


            //for cases like _ 3 3 _ in 3333
            if(right == 0)
            {
                if(mid != a[n-1])
                    right=1;
            }

            cout << "left:" << left << "mid:" << mid << "right:" << right <<endl;

            even_ans += (left%INF * right%INF)%INF;
        }

    }

    
   cout << (even_ans + odd_ans)%INF << endl;
}


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    f[0]=1;
    for(int i = 1 ; i < 1000001 ; i++)
        f[i] = (f[i-1]*i)%INF;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }

        solve(a,n);

        
    }

return 0;

}