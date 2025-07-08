#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        mp[x]++;
    }
    if (s.size() == 1)
    {
        cout << 0 << " ";
        cout << (mp[*s.begin()] * (mp[*s.begin()] - 1))/2 << endl;
    }
    else
    {
        int diff = *(prev(s.end())) - *s.begin();
        cout << diff << " ";
        int ans = 0;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            int el = *it;
            if (mp.find(el + diff) != mp.end())
            {
                ans += mp[el] * mp[el + diff];
            }
        }
        cout << ans << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}