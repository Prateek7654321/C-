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
        if (v[n - 2] > v[n - 1])
            cout << -1 << endl;
        else
        {
            vector<vector<int>> ans;
            int ops = 0;
            int i = n - 3;
            while (i >= 0)
            {
                if (v[i] > v[i + 1])
                {
                    v[i] = v[i + 1] - v[i+2];
                    ans.push_back({i + 1, i + 2, i+3});
                }
                i--;
            }
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
            }
        }
    }
}