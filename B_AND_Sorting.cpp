#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(v[i]==i)
            continue;
            else{
                int t=v[i]&i;
                if(ans==INT_MIN)
                ans=t;
                else
                {
                    if(t==ans)
                    continue;
                    else
                    {
                        ans=0;break;
                    }
                }

        
            }
        }
        cout<<ans<<endl;
    }
}