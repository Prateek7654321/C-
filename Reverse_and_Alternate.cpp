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
        vector<int> ind;
        int l = -1;
        int r = -1;
        if (n == 1)
            cout << "Yes" << endl;
        else
        {
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == s[i - 1])
                {
                    l = i;
                    break;
                }
            }
            for (int j = s.size() - 2; j >= 0; j--)
            {
                if (s[j] == s[j + 1])
                {
                    r = j;
                    break;
                }
            }

            if (l == -1 && r == -1)
            {
                cout << "Yes" << endl;
            }
            else if (l > r && abs(l - r) == 1)
            {
                if (s[r] != s[0] || s[l] != s[n - 1])
                {
                    cout << "Yes" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            else if (l == r)
                cout << "No" << endl;
            else
            {
                bool flag = true;
                for (int j = l + 1; j <= r; j++)
                {
                    if (s[j] == s[j - 1])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag && s[l] != s[r])
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
        }
    }
}