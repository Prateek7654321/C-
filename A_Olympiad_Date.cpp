#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> freq(10, 0);
    int ans = 0;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        freq[v[i]]++;
        ans++;
        if (freq[0] == 3 && freq[1] == 1 && freq[2] == 2 && freq[5] == 1 && freq[3] == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout <<ans << endl;
    else
        cout << 0 << endl;
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