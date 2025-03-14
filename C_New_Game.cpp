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
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        int unique=1;
        int l=0;
        int r=1;
        int ans=1;
        while(r<v.size())
        {
            if(v[r]-v[r-1]==0)
            {
                ans=max(ans,r-l+1);
            }
            else if(v[r]-v[r-1]==1)
            {
                unique++;
                if(unique<=k)
                {
                    ans=max(ans,r-l+1);
                }
                else
                { int x=l;
                    while(unique!=k)
                    {
                        if(v[l]==v[x])
                        l++;
                        else
                        unique--;
                    }
                    ans=max(ans,r-l+1);
                }
            }
            else
            {
                ans=max(ans,r-l);
                l=r;
                unique=1;
            }
            r++;
        }
        cout<<ans<<endl;
    }
}