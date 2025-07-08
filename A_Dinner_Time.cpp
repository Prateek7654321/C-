#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n == x)
    {
        if (m == y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if (n % x == 0)
        {
            if ((n / x) * y == m)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}