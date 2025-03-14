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
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = 0;
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            if (i & 1)
                ans += v[i];
            else
                ans -= v[i];
        }
        ans += v[0];
        vector<int> v1;
        v1.push_back(v[0]);
        v1.push_back(ans);
        for (int i = 1; i < v.size(); i++)
            v1.push_back(v[i]);
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;
    }
}