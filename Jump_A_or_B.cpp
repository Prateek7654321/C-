#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = m - b * n;
    int y = a - b;

    if (x % y == 0)
    {
        int f = x / y;
        if (f >= 0 && n - f >= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
        cout << "No" << endl;
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