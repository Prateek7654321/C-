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
        bool flag = false;
        int one = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
            {
                if (one > 0)
                {
                    ans += 2;
                    one = 0;
                }
                else
                    continue;
            }
        }
        if (one > 0)
            ans += 1;
        cout << ans << endl;
    }
}