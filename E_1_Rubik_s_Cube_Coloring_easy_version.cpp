#include <bits/stdc++.h>
using namespace std;
const int m = 1e9 + 7;
#define int long long
int calculate(int base, int exp)
{
    int result = 1;
    while (exp != 0)
    {
        if (exp % 2 == 1)
        {
            result = (result % m * base % m) % m;
        }
        base = (base % m * base % m) % m;
        exp = exp >> 1;
    }
    return result;
}
void solve()
{
    int n;
    cin >> n;
    long long t=pow(2,n);
    cout << (6 * calculate(4, t-2)%m) % m << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}