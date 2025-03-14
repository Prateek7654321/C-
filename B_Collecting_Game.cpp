#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;vector<int>prefix(n,0);vector<int>v1;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);v1.push_back(x);}sort(v.begin(),v.end());
        prefix[0]=v[0];
        for(int i=1;i<n;i++)
        prefix[i]=v[i]+prefix[i-1];
        map<int,int>mp;
        mp[v[n-1]]=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(prefix[i]>=v[i+1])
            {
                mp[v[i]]=mp[v[i+1]];
            }
            else
            mp[v[i]]=i;
        }
        for(int i=0;i<n;i++)
        cout<<mp[v1[i]]<<" ";
        cout<<endl;


    }
}