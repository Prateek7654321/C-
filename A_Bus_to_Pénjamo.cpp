#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;map<int,int>mp;int ans=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            ans+=(x/2)*2;k-=x/2;
            mp[x%2]++;
        }
        
        if(mp[1]<=k)
        cout<<ans+mp[1]<<endl;
        else
        {mp[1]-=k;
           ans+=k-mp[1];
           cout<<ans<<endl;
        }

    }
}