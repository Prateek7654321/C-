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
        vector<int> pos(n, 0);
        vector<int> neg(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (v[i] > 0)
                    pos[i] = v[i];
            }
            else
            {
                if (v[i] > 0)
                    pos[i] += v[i];
                pos[i] += pos[i - 1];
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                if (v[i] < 0)
                    neg[i] = abs(v[i]);
            }
            else
            {
                if (v[i] < 0)
                    neg[i] += abs(v[i]);
                neg[i] += neg[i + 1];
            }
        }
        int ans = 0;
        int finalans = 0;
        int last = -1;
        int l = 0;
        int r = 0;
        while (r < v.size())
        {
            if (r == 0)
            {
                ans += abs(v[r]);
                last = v[r];
                finalans=max(ans,finalans);
                if (r + 1 < n)
                {
                    finalans = max(finalans, ans + neg[r + 1]);
                }
                l = 0;
                r = 0;
            }
            else
            {
                if (last > 0)
                {
                    ans += abs(v[r]);
                    finalans=max(ans,finalans);
                    if (r + 1 < n)
                        finalans = max(finalans, ans + neg[r + 1]);
                    last = v[r];
                }
                else
                {
                    if (v[r] > 0)
                    {
                        l = r;
                        ans = v[r] + pos[r - 1];
                        finalans = max(ans, finalans);
                        if (r + 1 < n)
                            finalans = max(finalans, ans + neg[r + 1]);
                        last = v[r];
                    }
                    else
                    {
                        ans += abs(v[r]);
                        finalans = max(ans, finalans);
                        if (r + 1 < n)
                            finalans = max(finalans, ans + neg[r + 1]);
                        last = v[r];
                    }
                }
            }
            r++;
        }
        cout << finalans << endl;
    }
}