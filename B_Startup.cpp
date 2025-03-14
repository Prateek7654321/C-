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
        vector<pair<int, int>> v;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < k; i++)
        {
            mp[v[i].first] += v[i].second;
        }
        vector<int> v1;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            v1.push_back(it->second);
        }
        sort(v1.begin(), v1.end());
        int ans = 0;
        int bottles = 0;
        int i = v1.size() - 1;
        while (i >= 0)
        {
            if (bottles < n)
            {
                ans += v1[i];
                bottles++;
            }
            else
                break;
            i--;
        }
        cout << ans << endl;
    }
}