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
        vector<int> findarr;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < i + 1)
            {
                findarr.push_back(i + 1);
            }
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < i + 1)
            {
                auto it = lower_bound(findarr.begin(), findarr.end(), v[i]);
                if (it == findarr.end())
                    ans += findarr.size();
                else if (it == findarr.begin())
                {
                    ans += 0;
                }
                else
                {
                    int index = prev(it) - findarr.begin();
                    ans += index + 1;
                }
            }
        }
        cout << ans << endl;
    }
}