#include <bits/stdc++.h>
using namespace std;
#define int long long
int findindex(vector<int> &pref, int index, int cost)
{
    int ans = LLONG_MIN;
    int l = 0;
    int r = pref.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (pref[mid] + (long long)(mid + 1) * index <= cost)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        vector<int> pref(n, 0);
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = v[i] + pref[i - 1];
        }
        int i = 0;
        int ans = 0;
        while (i<=k)
        {
            int ops = findindex(pref, i, k);
            if (ops != LLONG_MIN)
                ans += ops + 1;
            else
                break;
            i++;    
        }
        cout << ans << endl;
    }
}