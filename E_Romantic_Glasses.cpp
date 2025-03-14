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
        map<int, int> mp;
        int x = 0;
        int y = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                x += v[i];
            else
                y += v[i];
            if (x == y)
            {
                flag = true;
                break;
            }
            if (mp[x - y])
            {
                flag = true;
                break;
            }
            mp[x - y]++;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }
    return 0;
}