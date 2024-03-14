#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll ar[n+5];
        ll pre[n+5];
        ll pos[n+5];
        for(ll i=1; i<=n; i++)
            cin>>ar[i];
        pre[0]=0;
        for(ll i=1; i<=n; i++)
        {
            pre[i]=gcd(pre[i-1],ar[i]);
        }
        pos[n+1]=0;
        for(ll i=n; i>=1; i--)
        {
            pos[i]=gcd(pos[i+1],ar[i]);
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans= gcd(pre[l-1],pos[r+1]);
            cout<<ans<<nl;
        }
    }
    return 0;
}
