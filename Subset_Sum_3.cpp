#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i] % 3]++;
    }
    if (mp.find(0) != mp.end())
    {
        cout << "Yes" << endl;
    }
    else if (mp[1] >= 3)
    {
        cout << "Yes" << endl;
    }
    else if (mp[1] >= 1 && mp[2] >= 1)
    {
        cout << "Yes" << endl;
    }
    else if (mp[2] >= 3)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}