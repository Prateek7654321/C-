#include <bits/stdc++.h>
using namespace std;
bool possible(int target, int k, vector<int> &v)
{
   int r=1;
   map<int,int>mp;
   int total=0;
   for(int r=1;r<v.size();r++)
   {
    if(v[r]<target)
    mp[v[r]]++;
    if(mp.size()==target)
    {
        total++;
        mp.clear();
    }
   }
   return (total>=k);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int l = 1;
    int r = n;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(mid, k, v))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
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