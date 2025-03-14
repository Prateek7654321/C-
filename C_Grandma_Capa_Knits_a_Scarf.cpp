#include <bits/stdc++.h>
using namespace std;
bool possible(string s, char remove, int &x)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            if (s[i] == remove)
            {
                x++;
                i++;
            }
            else if (s[j] == remove)
            {
                j--;
                x++;
            }
            else
                return false;
        }
    }
    return true;
};
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
        int i = 0;
        int j = s.size() - 1;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        bool flag = false;
        int ans = INT_MAX;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            int x = 0;
            if (possible(s, it->first, x))
            {
                flag = true;
                ans = min(ans, x);
            }
        }
        if (!flag)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}