#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
 set<ll>s;

void countdivisors(ll n)
{
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll x=i;
            ll y=n/i;
            s.insert(x);
            s.insert(y);
        }
    }
}

int main()
{
    ll n,k;
    cin>>n>>k;
    countdivisors(n);

    vector<ll>v;
    v.assign(s.begin(),s.end());
    if(k>v.size())
        cout<<-1<<nl;
    else
        cout<<v[k-1]<<nl;

}
