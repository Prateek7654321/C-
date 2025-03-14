#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    unordered_map<int, int> mp;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 2;
    mp[4] = 2;
    for (int i = 5; i <= 100000; i++)
    {
        int x = ceil(i + 1) / 2;
        mp[i] = mp[x - 1] + 1;
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << mp[n] << endl;
    }
}