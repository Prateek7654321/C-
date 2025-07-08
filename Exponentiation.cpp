#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
#define int long long
int modular_pow(int base, int exp)
{
    int result = 1;
    if (base == 0&&exp==0)
        return 1;
    else if(base==0)
    return 0;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = ((result % m) * (base % m)) % m;
        base = ((base % m) * (base % m)) % m;
        exp = exp >> 1;
    }
    return result % m;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << modular_pow(a, b) << endl;
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