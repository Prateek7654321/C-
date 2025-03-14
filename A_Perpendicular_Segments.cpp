#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x>=k&&y>=k)
        {
            cout<<0<<" "<<0<<" "<<k<<" "<<0<<endl;
            cout<<0<<" "<<0<<" "<<0<<" "<<k<<endl;
        }
        else
        {
            cout<<min(x,y)<<" "<<0<<" "<<0<<" "<<min(x,y)<<endl;
            cout<<0<<" "<<0<<" "<<min(x,y)<<" "<<min(x,y)<<endl;
        }
    }
}