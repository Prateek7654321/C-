#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        { flag=false;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int diff = abs(v[i] - v[j]);
                    if (diff % k == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag == false)
            {
                cout << "YES" << endl;
                cout << i + 1 << endl;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
    }
}