#include <bits/stdc++.h>
using namespace std;
#define int long long
void fillbits(map<int, int> &mp, int x)
{
    int a = 0;
    while (x != 0)
    {
        if (x & 1 == 1)
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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            fillbits(mp, x);
        }
        for (int j = 30; j >= 0; j--)
        {
            if (k >= n - mp[j])
            {
                for (int i = 0; i < n; i++)
                {
                    v[i] = (v[i] | 1 << j);
                }
                k -= n - mp[j];
            }
        }
        int ans = v[0];
        for (int i = 1; i < n; i++)
            ans = (ans & v[i]);
        cout << ans << endl;
    }
}