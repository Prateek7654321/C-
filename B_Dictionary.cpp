#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    ans += (s[0] - 'a') * 25;
    ans += (s[1] - 'a' + 1);
    if (s[1] > s[0])
    {
        cout << ans - 1 << endl;
    }
    else
        cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}