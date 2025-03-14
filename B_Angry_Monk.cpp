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
        int one = 0;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x == 1)
                one++;
        }
        int index = -1;
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {
            if (v[i] != 1)
            {
                index = i;
                break;
            }
        }

        int ans = 0;
        if (one == k)
            cout << k - 1 << endl;
        else
        {
            ans += one;
            for (int i = index; i < k - 1; i++)
            {
                ans += v[i] - 1 + v[i];
            }
            cout << ans << endl;
        }
    }
}