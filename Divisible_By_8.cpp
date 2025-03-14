#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        string s;
        cin >> s;
        int a = s.length();
        string b = "";
        if (a == 1)
            cout << 8 << endl;
        if (a > 3)
        {
            for (int i = a - 3; i < a; i++)
                b += s[i];
            int k = stoi(b);
            int x = k % 8;
            if (x == 0)
            {
                cout << s << endl;
            }
            else
            {
                char c = b[2];
                int h = c - '0';

                if (h >= x)
                    k -= x;
                else
                    k += 8 - x;
                string t = "";
                string f = to_string(k);
                for (int i = 0; i < g - 3; i++)
                {
                    t += s[i];
                }
                if (f.size() == 3)
                {
                    for (int k = 0; k < f.size(); k++)
                        t += f[k];
                }
                else
                {
                    t += '0';
                    for (int k = 0; k < f.size(); k++)
                        t += f[k];
                }
                cout << t << endl;
            }
        }
        else
        {
            int u = stoi(s);
            int f = u % 8;
            if (f == 0)
                cout << u << endl;
            else
            {
                if (s[g - 1] - '0' >= f)
                    u -= f;
                else
                    u += 8 - f;
                string f = to_string(u);
            }
        }
    }
    return 0;
}
