#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int per = (long long)(2 * (n + m));
        if (k >= per)
            cout << k - per << endl;
        else
        {
            int ans = INT_MAX;
            for (int i = 1; i <= n; i++)
            {
                bool flag = false;
                for (int j = 1; j <= m; j++)
                {
                    int f = (long long)(2 * (i + j));
                    if (f != k)
                    {
                        ans = min(ans, abs(k - f));
                    }
                    else if (f == k)
                    {
                        ans = 0;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            cout << ans << endl;
        }
    }
}