#include<bits/stdc++.h>
using namespace std;
#define int long long
bool possible(int sum,int cols,int k)
{
    return ((sum+cols-1)/cols)<=k;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v;
        int sum=0;int maxi=LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);sum+=x;
            maxi=max(maxi,x);
        }
        int h=1e15;int l=maxi;
        int ans=LLONG_MAX;
        while(l<=h)
        {
          int mid=l+(h-l)/2;
          if(possible(sum,mid,k))
          {ans=min(ans,mid);h=mid-1;}
          else
          l=mid+1;
        }
        cout<<ans<<endl;


    }
}