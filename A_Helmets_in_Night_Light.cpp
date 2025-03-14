#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n>>m;
     vector<int>v;
     vector<int>v1;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        v.push_back(x);
     }
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        v1.push_back(x);
     }
     vector<pair<int,int>>value;
     for(int i=0;i<n;i++)
     {
        value.push_back({v1[i],v[i]});
     }
     sort(value.begin(),value.end());
     int ans=0;
     ans+=m;
     int no=1;
     n-=1;
     for(int i=0;i<value.size();i++)
     {
        pair<int,int>p=value[i];
        int cost=p.first;
        int terms=p.second;
        if(cost<m)
        {
           if(terms<n)
           {n-=terms;ans+=cost*terms;
           }
           else
           {
            ans+=cost*n;n=0;
           }
        }
        else
        break;
     }
     ans+=n*m;
     cout<<ans<<endl;
    }
}