#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int j = n - 3;
        int last = v[n - 1];
        int ans = 0;
        while (j >= 0)
        {
            if (v[j] + v[j + 1] > last)
                j--;
            else
            {
                ans = j + 1;
                break;
            }
        }
        if(n-ans<ans)
        ans=n-ans;
        cout << ans << endl;
    }
}