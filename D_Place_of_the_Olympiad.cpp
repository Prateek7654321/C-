#include <bits/stdc++.h>
using namespace std;
#define int long long
bool possible(int mid, int n, int m, int k)
{
    if (mid == m)
        return true;
    int no = ((m + 1) / (mid + 1));
    int total = mid * no;
    int x = m - (no * (mid + 1));
    if (x > 0)
        total += x;
    return (total * n >= k);
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    int l = 1;
    int r = m;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(mid, n, m, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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