#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        vector<int>gd;
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            int a=v[i];int b=v[j];
            gd.push_back(abs(a-b));i++;
            j--;
        }
        int ans=gd[0];
        for(int i=1;i<gd.size();i++)
        {
          ans=__gcd(ans,gd[i]);
        }
        cout<<ans<<endl;
    }
}