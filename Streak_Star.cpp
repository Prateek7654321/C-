#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
      int lastindex=-1;
      int l=0;
      int r=1;
      int ans=1;
      int power=0;
      while(r<n)
      {
        if(v[r]>=v[r-1])
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            if(power==0)
            {
                if(v[r]*x>=v[r-1])
                {
                    v[r]=v[r]*x;
                    lastindex=r;
                    power++;
                    ans=max(ans,r-l+1);
                }
                else
                {
                    l=r;power=0;
                }
            }
            else
            {
                if(v[r]*x>=v[r-1])
                {
                    l=lastindex;
                    power=1;
                    ans=max(ans,r-l+1);
                    v[r]=v[r]*x;
                    lastindex=r;
                }
                else
                {
                    l=r;power=0;
                    lastindex=-1;
                }
            }
        }
        r++;
      }
      cout<<ans<<endl;
    }
}