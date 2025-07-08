#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    int final = sum * k;
    if (final < x)
        cout << 0 << endl;
    else
    {
        int l = 1;
        int r = k;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (final - sum * mid >= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        int p = ans;

        int f = 0;
        f = ans * n;
        f++;
        final = final - ans * sum;

        int i = 0;
        while (final >= x && i < n)
        {
            f++;
            final = final - v[i];
            i++;
        }
        cout << f - 1 << endl;
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