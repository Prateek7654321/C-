#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    ans += s[0];
    int i = 1;
    char last = s[0];
    while (i < s.size())
    {
        if (s[i] == last)
        {
            ans += '.';
        }
        else
            ans += s[i];
        last = ans[ans.size() - 1];
        i++;
    }

    i = 1;
    while (i < s.size())
    {
        if (ans[i] == '.')
        {
            int ascii = 122;
            if (i + 1 < s.size())
            {
                while (char(ascii) == ans[i- 1] || char(ascii) == ans[i + 1])
                    ascii--;
                ans[i] = char(ascii);
            }
            else
            {
                while (char(ascii) == ans[i-1])
                    ascii--;
                ans[i] = char(ascii);
            }
        }
        i++;
    }
    cout << ans << endl;
}