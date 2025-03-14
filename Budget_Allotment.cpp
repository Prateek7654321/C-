#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        vector<int>v;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;v.push_back(a);
            if(a>=x)
            {
                ans++;
            }
        }
        if(ans==0)
        cout<<0<<endl;
        else
        {
            int maxtranfer=0;
            sort(v.begin(),v.end());
            int index=-1;
            for(int i=v.size()-1;i>=0;i--)
            {
                if(v[i]>=x)
                {maxtranfer+=v[i]-x; index=i;}
                else
                break;
            }
            index--;
            while(index>=0)
            {
                if(x-v[index]<=maxtranfer)
                {
                    ans++;
                    maxtranfer-=(x-v[index]);
                    index--;
                }
                else
                break;
            }
            cout<<ans<<endl;
        }

    }
}