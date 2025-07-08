#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector<vector<int>> &adj, int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        vector<int> v = adj[i];
        if (v.size() != 0 && v[0] <= b)
            return false;
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    vector<vector<int>> adj(n + 1, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        int x = v[i].first;
        int y = v[i].second;
        adj[x].push_back(y);
    }
    int segments = 0;
    if (v.size() == 0)
        cout << ((n) * (n + 1)) / 2 << endl;
    else
    {int last
        for(int i=n;i>=1;i--)
        {

        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}