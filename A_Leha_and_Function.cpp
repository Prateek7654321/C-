#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    vector<int> v1(n, 0);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (mp.find(v1[i]) != mp.end())
        {
            ans[i] = v1[i];
            if (mp[v1[i]] == 1)
                mp.erase(v1[i]);
            else
                mp[v1[i]]--;
        }
    }
    vector<pair<int, int>> v2;
    for (int i = 0; i < n; i++)
    {
        v2.push_back({v1[i], i});
    }
    sort(v2.begin(), v2.end());
    for (int i = 0; i < v2.size(); i++)
    {
        int index = v2[i].second;

        if (ans[index] == -1)
        {
            auto it = prev(mp.end());

            ans[index] = it->first;
            if (it->second == 1)
                mp.erase(it);
            else
                mp[it->first]--;
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}