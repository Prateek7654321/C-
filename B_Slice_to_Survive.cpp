#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = 0;
    int y = m;
    int p = 0;
    int q = n;
    int ans = 0;
    while (abs(y - x) * (p - q) != 1)
    {
        ans++;
        int hcut = -1;
        int vcut = -1;
        if (x-b >= y - b + 1)
        {
            vcut = (q - p) * (y - b + 1);
        }
        else
            vcut = (q - p) * (x-b);
        if (a - p >= q - a + 1)
            hcut = (y - x) * (q - a + 1);
        else
            hcut = (y - x) * (a - p);
        if (hcut >= vcut)
        {
            if (b - x >= y - b + 1)
            {
                y = b;
            }
            else
                x = b - 1;
        }
        else
        {
            if (p - a >= q - a + 1)
            {
                q = a - 1;
            }
            else
            {
                p = a;
            }
        }
        a = (p + q) / 2;
        b = (x + y) / 2;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}