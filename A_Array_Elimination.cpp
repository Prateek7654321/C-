#include <bits/stdc++.h>
using namespace std;
#define int long long
void fillmap(int x, map<int, int> &mp)
{
    int a = 0;
    while (x != 0)
    {
        if ((x & 1) == 1)
            mp[a]++;
        a++;
        x = x >> 1;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        map<int, int> mp;
        bool flags = true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
                flags = false;
            v.push_back(x);
            fillmap(x, mp);
        }
        if (flags)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            vector<int> ans;
            int range = INT_MAX;
            for (auto it = mp.begin(); it != mp.end(); it++)
                range = min(range, it->second);

            for (int i = 1; i <= range; i++)
            {
                bool flag = true;
                for (auto it = mp.begin(); it != mp.end(); it++)
                {
                    if (((it->second) % i) != 0)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    ans.push_back(i);
            }
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}