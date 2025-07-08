#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1;
    if (s[0] == '1')
        ans += 1;
    bool flag = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            ans++;
        ans++;
        if (s[i] == '1' && s[i - 1] == '0')
            flag = true;
    }
    if (flag)
        cout << ans - 2 << endl;
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