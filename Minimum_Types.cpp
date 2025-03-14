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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            v1.push_back(y);
        }
        vector<int> cost;
        for (int i = 0; i < n; i++)
        {
            cost.push_back(v[i] * v1[i]);
        }
        sort(cost.begin(), cost.end());
        int j = cost.size() - 1;
        int ans = 0;
        int f = 0;
        while (j >= 0)
        {
            f += cost[j];
            ans++;
            if (f >= k)
            {
                break;
            }
            j--;
        }
        if (f < k)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}