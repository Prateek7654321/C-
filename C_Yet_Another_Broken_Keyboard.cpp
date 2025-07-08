#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < m; i++)
    {
        char x;
        cin >> x;
        mp[x]++;
    }
    int l = 0;
    int r = 0;
    int ans = 0;
    while (r < s.size())
    {
        if (mp.find(s[r]) == mp.end())
        {
            ans += ((r - l) * (r - l + 1)) / 2;
            l = r + 1;
            r++;
        }
        else
            r++;
    }
    ans += ((r - l) * (r - l + 1)) / 2;
    cout << ans << endl;
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