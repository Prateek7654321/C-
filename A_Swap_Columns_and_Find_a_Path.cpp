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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            v1.push_back(y);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(v[i], v1[i]);
        }
        int ans = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            int a = min(v[i], v1[i]);
            ans = max(ans, sum + a);
        }
        cout << ans << endl;
    }
}