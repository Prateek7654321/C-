#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;
    int maxi = ((n - (m - 1)) * (n - (m - 1) - 1)) / 2;
    int mini = 0;
    if (n == 1)
        cout << 0 << " " << 0 << endl;
    else
    {
        if (n % m == 0)
        {
            int x = n / m;
            int a = (x * (x - 1)) / 2;
            a = a * m;
            mini = a;
        }
        else
        {
            int x = n / m;
            int rem = n % m;
            mini += ((x + 1) * (x)) / 2 * rem;
            mini += (x * (x - 1)) / 2 * (m - rem);
        }
        cout << mini << " " << maxi << endl;
    }
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