#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        int ans = 0;
        vector<int> cost;
        for (auto it = mp.begin(); it != mp.end(); it++)
            cost.push_back(it->second);
        int initial = 1;
        for (int i = 0; i <cost.size(); i++)
        {
            int choice1 = ((cost[i]) * (2 * initial + (cost[i] - 1))) / 2;
            if (choice1 < x)
            {
                ans += choice1;
                initial = initial + cost[i];
            }
            else
                ans += x;
        }
        cout << ans << endl;
    }
}