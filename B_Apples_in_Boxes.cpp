#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if (v[n - 1] - v[0] <= k)
    {
        if (sum % 2 == 1)
            cout << "Tom" << endl;
        else
            cout << "Jerry" << endl;
    }
    else
    {
        if (v[n - 1] - v[0] - 1 <= k && v[n - 2] - v[0] <= k)
        {
            if (sum % 2 == 1)
                cout << "Tom" << endl;
            else
                cout << "Jerry" << endl;
        }
        else
            cout << "Jerry" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}