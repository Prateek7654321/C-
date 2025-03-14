#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int avg1 = 0;
        int avg2 = 0;
        int x = 0;
        int y = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
            {
                x++;
                avg1 += v[i];
            }
            else
            {
                y++;
                avg2 += v[i];
            }
        }
        if (avg1 % x == 0 && avg2 % y == 0 && avg1 / x == avg2 / y)
        {
            int k = avg1 / x;
            for (int i = 1; i < n - 1; i++)
            {
                if (v[i - 1] <= k)
                {
                    v[i + 1] -= (k - v[i - 1]);
                    v[i - 1] = k;
                }
                else
                {
                    v[i + 1] += (v[i - 1] - k);
                    v[i - 1] = k;
                }
            }
            unordered_map<int, int> mp;
            for (int i = 0; i < v.size(); i++)
            {
                mp[v[i]]++;
            }
            if (mp.size() == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}