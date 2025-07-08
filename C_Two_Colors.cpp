#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        int a = i;
        int b = n - i;
        int index = lower_bound(v.begin(), v.end(), b) - v.begin();
        if (index == m)
            continue;
        else
        {
            int index1 = lower_bound(v.begin(), v.end(), a) - v.begin();
            int total = m - index;
            int total1 = m - index1;
            int temp = (total) * (total1 - 1);
            if (a == b)
                ans += temp;
            else
                ans += 2 * temp;
        }
    }
    cout << ans << endl;
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