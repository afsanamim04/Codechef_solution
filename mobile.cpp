#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    if(n==1 || n==2) cout<<-1<<nl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                cout<<3<<' ';
            }
            else if(v[i]==3)
                cout<<1<<' ';
            else cout<<v[i]<<' ';
        }
        cout<<nl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
