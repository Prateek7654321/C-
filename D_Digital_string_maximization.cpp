#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        string ans = "";
        while (i < s.size())
        {
            int a = s[i] - '0';
            int index = -1;
            int j = i + 1;
            int rem = 9 - (s[i] - '0');
            int freq = 1;
            while (freq <= rem && j < s.size())
            {
                int no = s[j] - '0';
                no -= (j - i);
                if (no > a)
                {
                    a = no;
                    index = j;
                }
                freq++;
                j++;
            }
            if (a == s[i] - '0')
            {
                ans += s[i];
                i++;
            }
            else
            {
                ans += to_string(a);
                s.erase(index,1);
            }
        }
        cout << ans << endl;
    }
}