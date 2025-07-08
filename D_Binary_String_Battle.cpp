#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int one = 0;
    int zero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            one++;
        else
            zero++;
    }
    if (one <= k || k >= (n / 2) + 1)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
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