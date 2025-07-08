#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, f;
    cin >> n >> f;
    vector<int> v;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < f; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int k = 0;
    for (int j = v.size() - 1; j >= 0; j--)
    {
        if (k + 1 >= v[j])
            ans += v1[v[j] - 1];
        else
        {
            ans += v1[k];
            k++;
        }
    }
    cout << ans << endl;
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