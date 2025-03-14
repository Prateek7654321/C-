#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() == 1)
            cout << -1 << endl;
        else
        {
            string ans = "";
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == s[i - 1])
                {
                    ans += s[i];
                    ans += s[i - 1];
                    break;
                }
            }
            if (ans == "")
            {

                for (int i = 0; i <= s.size() - 3; i++)
                {
                    string p = s.substr(i, 3);
                    if (p[0] != p[1] && p[1] != p[2] && p[0] != p[2])
                    {
                        ans = p;
                        break;
                    }
                }
            }
            if (ans == "")
                cout << -1 << endl;
            else
                cout << ans << endl;
        }
    }
}