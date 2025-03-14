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
        sort(v.begin(),v.end());
        vector<int>freq;
        int x=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1])
            x++;
            else
            {
               freq.push_back(x);
               x=1;
            }
        }

        freq.push_back(x);
        sort(freq.begin(),freq.end());
        int len=freq.size();
        vector<int>suff(freq.size(),0);
        suff[len-1]=freq[len-1];
        for(int i=len-2;i>=0;i--)
        {
            suff[i]=freq[i]+suff[i+1];
        }
        int ans=INT_MIN;
        int unique=1;
        for(int j=suff.size()-1;j>=0;j--)
        {
            if(suff[j]%unique==0)
            {
                ans=max(ans,suff[j]);
            }
            else
            {
            int p=suff[j]%unique;
            ans=max(ans,suff[j]-p);
            }
            unique++;
        }
        cout<<ans<<endl;
    }
}