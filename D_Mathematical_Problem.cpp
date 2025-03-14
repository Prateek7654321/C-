#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = INT_MAX;
        if (n == 2)
        {
            cout << stoi(s) << endl;
        }
        else
        {
            vector<int> pref(s.size(), 1);
            vector<int> suff(s.size(), 1);
            for (int i = 0; i < s.size(); i++)
            {
                if (i == 0)
                {
                    pref[i] = s[i] - '0';
                    suff[n - i - 1] = s[n - i - 1] - '0';
                }
                else
                {
                    if (pref[i - 1] == 1 || pref[i - 1] == 0 || s[i] == '1' || s[i] == '0')
                    {
                        pref[i] = (s[i] - '0') * pref[i - 1];
                    }
                    else
                    {
                        pref[i] = pref[i - 1] + s[i] - '0';
                    }
                    if (suff[n - i] == 1 || suff[n - i] == 0 || s[n - i - 1] == '1' || s[n - i - 1] == '0')
                        suff[n - i - 1] = (s[n - i - 1] - '0') * suff[n - i];
                    else
                        suff[n - i - 1] = suff[n - i] + s[n - i - 1] - '0';
                }
            }
            for (int i = 0; i < s.size() - 1; i++)
            {
                int f = stoi(s.substr(i, 2));
                if (i == 0)
                {
                    ans = min(ans, min(f * suff[i + 2], f + suff[i + 2]));
                }
                else if (i == s.size() - 2)
                {
                    ans = min(ans, min(f * pref[i - 1], f + pref[i - 1]));
                }
                else
                {
                    int a = f * suff[i + 2] * pref[i - 1];
                    int b = f + suff[i + 2] + pref[i - 1];
                    int c = (f * suff[i + 2]) + pref[i - 1];
                    int d = (f + suff[i + 2]) * pref[i - 1];
                    ans = min(ans, min(a, min(b, min(c, d))));
                }
            }
            cout << ans << endl;
        }
    }
}