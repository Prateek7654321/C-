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
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        char maxrep = '.';
        char minrep = '.';
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > maxi)
            {
                maxi = it->second;
                maxrep = it->first;
            }
            if (it->second < mini)
            {
                mini = it->second;
                minrep = it->first;
            }
        }
        if (minrep == maxrep)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != maxrep)
                {
                    s[i] = maxrep;
                    break;
                }
            }
        }
        else
        {

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == minrep)
                {
                    s[i] = maxrep;
                    break;
                }
            }
        }
        cout << s << endl;
    }
}