#include <bits/stdc++.h>
using namespace std;
void applydfs(int node, vector<pair<int, int>> &store, vector<vector<int>> &adj, string s)
{

    int a = 0;
    int b = 0;
    for (auto &value : adj[node])
    {
        if (s[value] == 'W')
        {
            store[value].first += 1;
            applydfs(value, store, adj, s);
            a += store[value].first;
            b += store[value].second;
        }
        else
        {
            store[value].second += 1;
            applydfs(value, store, adj, s);
            a += store[value].first;
            b += store[value].second;
        }
    }
    store[node].first += a;
    store[node].second += b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        string s;
        cin >> s;
        s = "." + s;
        int ans = 0;
        vector<pair<int, int>> dp(n + 1, {0, 0});
        vector<vector<int>> adj(n + 1, vector<int>());
        if (s[1] == 'B')
            dp[1].second += 1;
        else
            dp[1].first += 1;
        for (int i = 0; i < v.size(); i++)
        {
            adj[v[i]].push_back(i + 2);
        }
        applydfs(1, dp, adj, s);

        for (int i = 1; i <= n; i++)
        {
            if (dp[i].first == dp[i].second)
                ans += 1;
            // cout<<dp[i].first<<" "<<dp[i].second<<endl;
        }
        cout << ans << endl;
        ;
    }
}