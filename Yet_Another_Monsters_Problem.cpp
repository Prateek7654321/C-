#include <bits/stdc++.h>
using namespace std;
#define int long long
bool possible(int mid, map<int, int> &mp)
{

    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {

        if (it->first <= mid)
        {
            int f = 1;
        }
        else
        {
            if (it->second <= mid)
            {
                mid -= it->second;
            }
            else
                return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int lo = 1;
    int hi = prev(mp.end())->first;
    int ans = hi;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (possible(mid, mp))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}