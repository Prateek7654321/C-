#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v, v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            v1.push_back(y);
        }
        sort(v1.begin(), v1.end());
        if (v1[0] - v[0] < v[0])
            v[0] = v1[0] - v[0];

        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            int last = v[i - 1];
            int x = last + v[i];
            auto it = lower_bound(v1.begin(), v1.end(), x);
            if (it == v1.end())
            {
                if (v[i] < v[i - 1])
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (v[i] >= v[i - 1])
                {
                    if (*it - v[i] >= v[i - 1] && *it - v[i] <= v[i])
                    {
                        v[i] = *it - v[i];
                    }
                }
                else
                {
                    if (*it - v[i] >= v[i - 1])
                    {
                        v[i] = *it - v[i];
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}