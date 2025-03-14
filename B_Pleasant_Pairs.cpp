#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int,int>> v;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        int maxi=n+n-1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
          for(int j=i+1;j<n;j++)
          {
             int el=((long long)v[i].first*(long long)v[j].first);
            if(el>maxi)
            break;
            
            if(el==v[i].second+v[j].second)
            ans++;
          }
        }
       cout<<ans<<endl;
    }
    return 0;
}
