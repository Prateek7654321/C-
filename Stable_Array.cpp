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
        unordered_map<int, int> mp;
        int ans = 0;
        int maxi = v[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] < maxi)
            {
                mp[i] = 1 + mp[i + 1];
                ans = max(ans,mp[i]);
            }
            else
            {
                maxi = v[i];
            }
        }
        cout << ans << endl;
    }
}