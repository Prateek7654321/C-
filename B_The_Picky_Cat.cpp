#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int el = v[0];
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
            v[i] = -1 * v[i];
    }
    sort(v.begin(), v.end());
    if (el < 0)
        el = -1 * el;
    int index = lower_bound(v.begin(), v.end(), el) - v.begin();
    int right = n - 1 - index;
    if (right >= ((n + 1) / 2) - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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