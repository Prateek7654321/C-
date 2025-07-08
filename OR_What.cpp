#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1, 0);
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        if ((i & x) == i)
        {
            if ((i ^ x) == 0)
            {
                mp[i] = i;
            }
            else if((i^x)<=n)
                mp[i] = (i ^ x);
        }
    }
    int i = 1;
    vector<int> rem;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
            rem.push_back(i);
    }
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << rem[j] << " ";
            j++;
        }
        else
            cout << mp[i] << " ";
    }
    cout << endl;
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