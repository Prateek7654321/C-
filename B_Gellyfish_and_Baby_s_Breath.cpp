#include <bits/stdc++.h>
using namespace std;
const int m = 998244353;
#define int long long

int binpow(int base, int exp)
{
    int result = 1;
    while (exp != 0)
    {
        if (exp & 1)
            result = (result % m * base % m) % m;
        base = (base % m * base % m) % m;
        exp = exp >> 1;
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        int mx = LLONG_MIN;
        for (int j = 0; j <= i / 2; j++)
        {
            int a = (binpow(2, v[j]) + binpow(2, v1[i - j])) % m;
            int b = (binpow(2, v1[j]) + binpow(2, v[i - j])) % m;
            mx = max({mx, a, b});
        }
        res[i] = mx;
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}
