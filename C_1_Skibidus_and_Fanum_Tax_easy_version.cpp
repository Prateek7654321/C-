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
        int y;
        cin >> y;
        v1.push_back(y);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (y - v[i] < v[i])
                    v[i] = y - v[i];
            }
            else
            {
                if (v[i] >= v[i - 1])
                {
                    if (y - v[i] <=v[i] && y - v[i] >= v[i - 1])
                    {
                        v[i] = y - v[i];
                    }
                }
                else
                {
                    if (y - v[i] >=v[i - 1])
                        v[i] = y - v[i];
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (!flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}