#include <bits/stdc++.h>
using namespace std;

void solve()
{
   string s;
   cin>>s;
    int ans = 0;
    bool flag = false;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (flag == false)
        {
            if (s[i] != '0')
            {
                flag = true;
            }
            else
                ans++;
        }
        else
        {
            if (s[i] != '0')
                ans++;
        }
    }
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