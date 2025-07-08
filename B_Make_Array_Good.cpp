#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    vector<pair<int, int>> ans;
    int x = 2;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int no = v[i].first;
        int div = (no + x - 1) / x;
        ans.push_back({v[i].second + 1, div * x - no});
        x = no + (div * x - no);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}