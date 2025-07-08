#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp[v[i]] = v1[i];
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    int sum = 0;
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = sum;
        if (pq.size() < k)
        {
            sum += mp[i];
            pq.push(mp[i]);
        }
        else
        {
            if (pq.top() < mp[i])
            {
                sum -= pq.top();
                pq.pop();
                sum += mp[i];
                pq.push(mp[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[v[i]] << " ";
    cout << endl;
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