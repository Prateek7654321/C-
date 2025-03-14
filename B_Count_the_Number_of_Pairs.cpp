#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v1(52, 0);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 97)
            {
                int h = s[i] - 97;
                v1[h]++;
            }
            if (s[i] <= 90)
            {
                int h = s[i] - 65;
                v1[h + 26]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (v1[i] == 0 || v1[i + 26] == 0)
                continue;
            else
            {
                if (v1[i] > v1[i + 26])
                {
                    ans = ans + v1[i + 26];
                    v1[i] -= v1[i + 26];
                    v1[i + 26] = 0;
                }
                else if (v1[i] == v1[i + 26])
                {
                    ans = ans + v1[i];
                    v1[i] = 0;
                    v1[i + 26] = 0;
                }
                else
                {
                    ans = ans + v1[i];
                    v1[i + 26] -= v1[i];
                    v1[i] = 0;
                }
            }
        }
        for (int i = 0; i < 52; i++)
        {
            if (k <= 0)
                break;
            if (v1[i] >= 2)
            {
                int f = v1[i] / 2;
                if (k > f)
                {
                    k = k - f;
                    ans += f;
                }
                else if (k == f)
                {
                    ans = ans + f;
                    k = k - f;
                    break;
                }
                else
                {
                    
                    ans = ans + k;
                    k = 0;
                    break;
                }
            }
            else
                continue;
        }

        cout << ans << endl;
    }
}