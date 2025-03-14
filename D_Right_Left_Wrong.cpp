#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);}
        string s;cin>>s;
        int l=0;
        int r=n-1;
        int ans=0;
        vector<int>pref(n,0);
        pref[0]=v[0];
        for(int i=1;i<n;i++)
        {
        pref[i]=v[i]+pref[i-1];
        }
        while (l<r)
        {
          if(s[l]=='L')  
          {
            while(s[r]!='R')
            {
                r--;
                if(r<l)
                break;
            }
            if(r<l)
            break;
            else
            {
                ans+=l==0?pref[r]:pref[r]-pref[l-1];
                l++;
                r--;
            }
          }
          else
          {
            l++;
          }
        }
        cout<<ans<<endl;
        
    }
}