#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n,0);
    vector<int> v1(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    map<pair<int, int>, int> mp;
    map<int, pair<int, int>> mps;
    int same = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v1[i])
            same++;
        mp[{v[i], v1[i]}]=i;
        mps[i] = {v[i], v1[i]};
    }
    bool flag = true;
    int index = -1;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        int b = v1[i];
        if (mp.find({b, a}) == mp.end())
        {
            flag = false;
            break;
        }
        if (a == b)
            index = i;
    }
    if ((n % 2 == 0 && same > 0) || (n % 2 != 0 && same > 1) || !flag)
        cout << -1 << endl;
    else
    {
        int total = 0;
        if (index != -1)
        {
            pair<int, int> a = mps[index];
            pair<int, int> b = mps[n / 2];
            if(index!=n/2)
            ans.push_back({index + 1, (n / 2) + 1});
            mp[a] = n / 2;
            mp[b] = index;
            mps[n / 2] = a;
            mps[index] = b;
            if (index != n / 2)
                total++;
        }
        int i = 0;
        while (i < n / 2)
        { if(mps[i].first==mps[n-i-1].second&&mps[i].second==mps[n-i-1].first)
            {
                i++;continue;
            }
            int li = n - i - 1;
            pair<int, int> c = mps[li];
            int find = mp[{c.second, c.first}];
            pair<int, int> a = mps[i];
            pair<int, int> b = mps[find];
            ans.push_back({i + 1, find + 1});
            mp[a] = find;
            mp[b] = i;
            mps[find] = a;
            mps[i] = b;
            if (i != find)
                total++;
            i++;
        }
        cout << total << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i].first != ans[i].second)
                cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}