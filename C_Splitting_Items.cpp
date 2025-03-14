#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=n-2;i>=0;i-=2)
        {
            if(v[i+1]-v[i]>m)
            {
                v[i]=v[i]+m;break;
            }
            else
            {    m-=(v[i+1]-v[i]);
                v[i]=v[i+1];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
          if(n%2==0)
          {
            if(i%2!=0)
            ans+=v[i];
            else
            ans-=v[i];
          }
          else
          {
             if(i%2!=0)
            ans-=v[i];
            else
            ans+=v[i];
          }
        }
        cout<<ans<<endl;
    }
}