#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i] - v1[i]]++;
        }
        auto it = prev(mp.end());
        int ans = it->first;
        cout << it->second << endl;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (v[i] - v1[i] == ans)
            {
                s.insert(i + 1);
            }
        }
        for (auto &value : s)
        {
            cout << value << " ";
        }
        cout << endl;
    }
}