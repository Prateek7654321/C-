#include <bits/stdc++.h>
using namespace std;
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
int main()
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
        int maxi = INT_MIN;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (n - it->second <= k)
            {
                maxi = max(maxi, it->first);
            }
        }

        for (int i = 0; i < n; i++)
        {
            v[i] = (v[i] | 1 << maxi);
        }
        int ans = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            ans = ans & v[i];
        }
        cout << ans << endl;
    }
}