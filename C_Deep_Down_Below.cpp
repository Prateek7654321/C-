#include <bits/stdc++.h>
using namespace std;
#define int long long
bool possible(int power, vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (power >= v[i].first)
        {
            power += v[i].second;
        }
        else
            return false;
    }
    return true;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int size;
            cin >> size;
            int maxi = INT_MIN;
            int pos = 0;
            for (int i = 0; i < size; i++)
            {
                int x;
                cin >> x;
               maxi=max(maxi,x-(i-1));
            }
            v.push_back({maxi, size});
        }
        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i].first << " " << v[i].second << endl;
        int l = 1;
       
        int ans = INT_MAX;
        sort(v.begin(), v.end());
        int r = v[v.size()-1].first;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (possible(mid, v))
            {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
}