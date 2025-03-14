#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int x = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            v[i] = v[i] - x;
            if (v[i] >= 0)
                ans += v[i];
            x++;
        }
        cout << ans << endl;
    }
}