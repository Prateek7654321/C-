#include <bits/stdc++.h>
using namespace std;
const int m = 998244353;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int x = 1;
    for (int i = 0; i < v.size(); i++)
    {
        x = (x % m * (v[i] - i) % m) % m;
    }
    cout << x << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}