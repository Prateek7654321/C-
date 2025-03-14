#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[i] = x;
        }
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == i)
            {
                continue;
            }
            else
            {
                if (i == v[i + 1] && abs(v[i] - v[i + 1]) == 1)
                {
                    swap(v[i], v[i + 1]);
                }
                else
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}