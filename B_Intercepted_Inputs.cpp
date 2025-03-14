#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            mp[x]++;
        }
        n-=2;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if(mp[i]>0&&mp[n/i]>0)
                {
                    cout<<i<<" "<<n/i<<endl;break;
                }

            }
        }

    }
    
}