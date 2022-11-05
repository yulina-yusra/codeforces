//https://codeforces.com/contest/1747/problem/B



#include<bits/stdc++.h>
#define ll long long
#define lld long double
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll m;
        cin>>m;
        int s=2,b=3*m;
        if(m==1)
            cout<<"1\n2 3\n";
        else
        {
            cout<<(m+1)/2<<"\n";
            while(s<b)
            {
                cout<<s<<" "<<b<<"\n";
                s+=3;
                b-=3;
            }
        }
    }

    return 0;
}
