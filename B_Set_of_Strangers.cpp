#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> s;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                v[i][j] = x;
                s.insert(x);
            }
        }
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i - 1 >= 0 && v[i][j] == v[i - 1][j])
                    mp[v[i][j]] = 2;
                else if (j - 1 >= 0 && v[i][j] == v[i][j - 1])
                    mp[v[i][j]] = 2;
                else if (i + 1 < n && v[i][j] == v[i + 1][j])
                    mp[v[i][j]] = 2;
                else if (j + 1 < m && v[i][j] == v[i][j + 1])
                    mp[v[i][j]] = 2;
                else
                {
                    if (mp.find(v[i][j]) == mp.end())
                        mp[v[i][j]] = 1;
                }
            }
        }
        int sum = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
            sum += it->second;
        int ans = INT_MAX;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            ans = min(ans, sum - int(mp[*it]));
        }
        cout << ans << endl;
    }
}