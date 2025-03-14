#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v;
        int verify = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x == 1)
                verify += 1;
        }
        if (verify < s)
            cout << -1 << endl;
        else if (verify == s)
            cout << 0 << endl;
        else
        {
            vector<int> pref(n, 0);
            pref[0] = v[0];
            for (int i = 1; i < n; i++)
            {
                pref[i] = pref[i - 1] + v[i];
            }
            int sum = 0;
            int l = 0;
            int mini = LLONG_MIN;
            while (l < n)
            {
                sum += v[l];
                if (sum == s)
                {
                    mini = max(mini, l + 1);
                }
                else if (sum > s)
                {
                    int extra = sum - s;
                    int index = lower_bound(pref.begin(), pref.end(), extra) - pref.begin();

                    mini = max(mini, l - index);
                }
                l++;
            }

            cout << n - mini << endl;
        }
    }
}