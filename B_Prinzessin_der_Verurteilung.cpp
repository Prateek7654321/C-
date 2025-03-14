#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<string, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            string p = "";
            p += s[i];
            mp[p]++;
            p = "";
            if (i + 1 < s.size())
            {
                p += s.substr(i, 2);
                mp[p]++;
                p = "";
            }
            if (i + 2 < s.size())
            {
                p += s.substr(i, 3);
                mp[p]++;
                p = "";
            }
        }
        bool flag = false;
        for (int i = 0; i <= 25; i++)
        {
            string f = "";
            f += char(97 + i);
            if (mp[f] == 0)
            {
                cout << f << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            for (int i = 0; i <= 25; i++)
            {
                for (int j = 0; j <= 25; j++)
                {
                    string f = "";
                    f += char(i + 97);
                    f += char(j + 97);
                    if (mp[f] == 0)
                    {
                        cout << f << endl;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
        }
        if (!flag)
        {
            for (int i = 0; i <= 25; i++)
            {
                for (int j = 0; j <= 25; j++)
                {
                    for (int k = 0; k <= 25; k++)
                    {
                        string f = "";
                        f += char(i + 97);
                        f += char(j + 97);
                        f += char(k + 97);
                        if (mp[f] == 0)
                        {
                            cout << f << endl;
                            flag = true;
                            break;
                        }
                    }
                    if (flag)
                        break;
                }
                if (flag)
                    break;
            }
        }
    }
}