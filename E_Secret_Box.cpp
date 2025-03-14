#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int b;
        int c;
        int k;
        cin >> a >> b >> c >> k;
        int x = min(c, min(a, b));
        int z = max(a, max(b, c));
        int y = a + b + c - (x + z);
        int a1 = -1;
        int b1 = -1;
        int c1 = -1;
        bool flag = false;
        bool flags = false;
        int ans = INT_MIN;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                int f;
                if (k % (i * j) == 0)
                {
                    if (k / (i * j) <= z)
                    {
                        f = k / (i * j);

                        a1 = i;
                        b1 = j;
                        c1 = f;

                        a1 = x - a1 + 1;

                        b1 = y - b1 + 1;

                        c1 = z - c1 + 1;

                        ans = max(ans, a1 * b1 * c1);
                    }
                }
            }
        }
        if (a1 == -1 || b1 == -1 || c1 == -1)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
}
