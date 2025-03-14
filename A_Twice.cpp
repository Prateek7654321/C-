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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        int ans = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans += (it->second) / 2;
        }
        cout << ans << endl;
    }
}