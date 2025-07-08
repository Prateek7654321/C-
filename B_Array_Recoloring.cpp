#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (k == 1)
        {

            int x = 0;
            for (int i = 1; i < n - 1; i++)
            {
                x = max(x, v[i]);
            }
            cout << max({x + v[0], x + v[n - 1], v[0] + v[n - 1]}) << endl;
        }
        else
        {
            int ans = 0;
            sort(v.begin(), v.end());
            for (int i = n - 1; i >= (n - (k + 1)); i--)
            {
                ans += v[i];
            }
            cout << ans << endl;
        }
    }
}