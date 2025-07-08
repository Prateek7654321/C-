#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int last = v[0];
    bool flag = false;
    int next = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            flag = true;
    }
    if (v[0] == 0 && v[1] != 1)
        flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == 0 && v[i + 1] != 1)
            flag = false;
    }
    if (!flag)
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