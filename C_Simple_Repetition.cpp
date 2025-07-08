#include <bits/stdc++.h>
using namespace std;
#define int long long
bool checkprime(int n)
{

    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1 && k == 2)
        cout << "YES" << endl;
    else if (k > 1)
        cout << "NO" << endl;
    else
    {
        if (checkprime(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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