#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << -1 << endl;
    else
    {
        int ans = 0;
        int x = n;
        int y = m;
        int a = 0;
        while (x != 0 || y != 0)
        {
            if ((x & 1) && (y & 1))  // Proper bitwise AND check
            {
                ans += (1 << a);  // Shift properly
                cout<<ans<<endl;
                n = n + (1 << a); // Ensure correct precedence
                m = m + (1 << a);
                a = 0;
                x = n;  // Update x and y
                y = m;
            }
            else
            {
                a++;
                x = x >> 1; // Right shift
                y = y >> 1;
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
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}