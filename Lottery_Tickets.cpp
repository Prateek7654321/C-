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
        int target = v[0];
        sort(v.begin(), v.end());
        auto it = lower_bound(v.begin(), v.end(), target);
        int index = it - v.begin();
        int ans = 0;
        if (index == n - 1)
        {
            ans = 1e6 - target;
            ans += (v[index] - v[index - 1]) / 2;
            ans += 1;
        }
        else if (index == 0)
        {
            ans += v[index] - 1;
            ans += (v[index + 1] - v[index]) / 2;
            ans += 1;
        }
        else
        {
            ans += (v[index + 1] - v[index]) / 2;
            ans += (v[index] - v[index - 1]) / 2;
            ans += 1;
        }
        cout << ans << endl;
    }
}