#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v(n);
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        maxi = max(maxi, v[i]);
    }
    int el = v[n - 1];
    if (mp.size() == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != maxi)
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
        cout << endl;
    }
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