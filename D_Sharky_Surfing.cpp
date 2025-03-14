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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        vector<pair<int, int>> v1;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            v1.push_back({x, y});
        }
        multiset<int> s;
        int ans = 0, power = 1, j = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            int start = v[i].first;
            int req = v[i].second - v[i].first+2;
            if (start >= k)
                break;

            while (j < v1.size())
            {
                if (v1[j].first <= start)
                {
                    s.insert(v1[j].second);
                    j++;
                }
                else
                {
                    break;
                }
            }

            if (power > req)
                continue;
            while (!s.empty() && power < req)
            {
                auto it = prev(s.end());
                power += *it;
                s.erase(it);
                ans++;
                if (power > req)
                    break;
            }

            if (power < req)
            {
                flag = false;
                break;
            }
        }

        if (!flag)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}
