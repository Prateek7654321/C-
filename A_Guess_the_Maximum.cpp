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
        int i=0;
        int j=i+1;
        int ans=INT_MAX;
        while(j<=n-1)
        {
            ans=min(ans,max(v[i],v[j]));
            i++;
            j++;
        }
        cout<<ans-1<<endl;

    }
}