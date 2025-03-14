#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            mp[x]++;
        }
        int ans=0;
        int maxi=INT_MIN;
        int prev=-1;
        int prevno=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(prev==-1)
            {   prev=it->second;
                ans+=it->second;
                prevno=it->first;
            }
            else
            { if(it->first-prevno==1)
              {if(it->second>prev)
              ans+=it->second-prev;
              prev=it->second;prevno=it->first;}
              else
              {
                prev=it->second;
                ans+=it->second;
                prevno=it->first;
              }
            }
        }
        cout<<ans<<endl;

    }
}