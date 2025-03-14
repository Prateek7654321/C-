#include<bits/stdc++.h>
using namespace std;
int main()
{
  
        int n,m;
        cin>>n>>m;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        int odd=0;
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%2==0)
            ans+=it->second;
            else
            {
                ans+=it->second-1;
                odd++;
            }

        }
        if(odd%2==0)
        ans+=odd/2;
        else
        ans+=odd/2+1;
        cout<<ans<<endl;
    }
