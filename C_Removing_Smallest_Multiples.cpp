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
        s = " " + s;
        int ans = 0;
        unordered_map<int, int> mp;
        for (int i = 1; i < s.size(); i++)
        {
            int k = 1;
            if (s[i] == '0')
            {
                int index = i;
                while (index < s.size())
                {
                    if (s[index] == '0')
                    {
                        if (mp[index] == 0)
                        {
                            ans += i;
                            mp[index] = 1;
                        }
                        k++;
                        index = i * k;
                    }
                    else
                        break;
                }
            }
            else
            continue;
        }
        cout<<ans<<endl;
    }
}