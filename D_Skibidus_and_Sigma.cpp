#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<pair<int, int>> sums;
        for (int i = 0; i < n; i++)
        {
            int prefSum = 0;
            int a = 0;
            for (int j = 0; j < v[i].size(); j++)
            {
                a += v[i][j];
                prefSum += a;
            }
            sums.push_back({a,prefSum});
        }
        int ans = 0;
        sort(sums.begin(), sums.end());
        int x = 0;
        for (int i = sums.size() - 1; i >= 0; i--)
        {
            ans+= (long long)m *(long long) x + sums[i].second;
            x += sums[i].first;
        }
        cout << ans << endl;
    }
}