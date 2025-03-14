#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v;
        unordered_map<int, int> mp;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x];
            if (mp[x] >= 2)
                flag = true;
        }
        if (flag == true)
        {
            if (0 >= a && 0 <= b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            flag = false;
            int x = 1;
            if (n >= 8)
                cout << "NO" << endl;
            else
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        int f = (long long)(v[i] ^ v[j]);
                        x = (long long)(x * f);
                        if (x > b)
                        {
                            flag = true;
                            break;
                        }
                    }
                    if (flag)
                        break;
                }
            }
            if (flag)
                cout << "NO" << endl;
            else
            {
                if (x >= a && x <= b)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}