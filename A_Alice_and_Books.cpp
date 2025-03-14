#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    { int n;cin>>n;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;v.push_back(x);
        if(i!=n-1)
        {
            v1.push_back(x);
        }
    }
    int ans=0;
    ans+=v[n-1];
    sort(v1.begin(),v1.end());
    ans+=v1[v1.size()-1];
    cout<<ans<<endl;

    }
}