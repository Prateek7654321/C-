#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            if (k % 2 != 0)
                k -= 1;
            if (k >= n)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << (n + k - 1) / k << endl;
            }
        }
        else
        {
            int ans = 0;
            if (k >= n)
            {
                cout << 1 << endl;
            }
            else
            {
                if (k % 2 != 0)
                    n = n - k;
                else
                    n = n - (k - 1);
                if (k % 2 != 0)
                    k = k - 1;
                ans += 1;
                ans += (n + k - 1) / k;
                cout << ans << endl;
            }
        }
    }
}