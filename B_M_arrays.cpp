#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        set<int> s;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x%k]++;
            s.insert(x%k);
        }
        int ans=0;
        auto it=s.begin();
        while(s.size()!=0)
        { auto it=s.begin();
          int value=*it;
          int rem=(k-*it)%k;
          
        if(mp.find(rem)==mp.end())
        ans+=mp[value];
        else
        {
            if(mp[rem]==mp[value])
            ans+=1;
            else
            {
                ans+=1+max(mp[rem],mp[value])-(min(mp[rem],mp[value])+1);
            }
        }
        s.erase(value);
        s.erase(rem);
        }
        cout<<ans<<endl;
    }
}