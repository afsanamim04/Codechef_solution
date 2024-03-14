#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        if(n<2)
        {
            cout<<"no"<<endl;
            return 1;
        }
        if(n<=3)
        {
            cout<<"no"<<endl;
            return 1;
        }
        if(n%2==0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            for(int i=3; i<=sqrt(n); i+=2)
            {
                if(n%i==0)
                    flag++;
            }
            if(flag==0)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}
