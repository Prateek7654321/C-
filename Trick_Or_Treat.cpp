#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        vector<int>v1;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v1.push_back(x);
            mp[x%k]++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%k==0)
            {
                ans+=mp[0];
                
            }
            else
            {
                int f=v[i]/k+1;
                ans+=mp[f*k-v[i]];
            }
         
        }
        cout<<ans<<endl;
    }
}