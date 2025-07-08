#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    string s;
    cin >> s;
    bool flag = false;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && ans % 2 == 0)
           {flag=true;continue;}
        else if (s[i] == '1' && ans % 2 != 0)
        {
            ans++;flag=true;
        }
        else if (s[i] == '0')
        {
            if (flag&&ans%2==0)
            {
                ans++;
            }
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