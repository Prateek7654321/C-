#include <bits/stdc++.h>
using namespace std;
#define int long long
int findans(int x, int n, int k, int hi)
{
    int l = 1;
    int h = n;
    int mid;
    int ans=0;
    while (l <= h)
    {
        mid = (l) + (h - l) / 2;
        if ((x - mid) * (k - 1) +mid >= hi)
        { ans=mid;
            l = mid + 1;
        }
        else if ((x - mid) * k < hi)
        {
            h = mid - 1;
        }
    }
    return ans;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, h;
        int ans = 0;
        cin >> n >> k >> h;
        if (n == 1)
            cout << 0 << endl;
        else
        {
            for (int i = 2; i <= n; i++)
            {
                if (i >= h)
                {
                    ans += n;
                }
                else
                {


                    int o = findans(i, n, k, h);
                   
                        ans += o;
                }
               
            }
             cout << ans << endl;
        }
    }
}