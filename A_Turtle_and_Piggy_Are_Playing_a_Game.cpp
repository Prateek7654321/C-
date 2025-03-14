#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int ans=0;
        int f=2;
        while(f<=m)
        {
            ans++;
            f*=2;
        }
        cout<<ans<<endl;
    }
}