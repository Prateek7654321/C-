#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
   
        int ans=0;
        int sum=0;
        map<int,int>mp;
        int i=0;int j=0;
        while(j<n)
        {
            sum+=v[j];
            mp[v[j]]+=1;
            if(sum%2==0)
            { if(mp[sum/2]>0)
                ans+=1;
            }
            j++;
         
        }
        cout<<ans<<endl;
    }
}