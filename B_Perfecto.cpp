#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isPerfectSquare(long long x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        // is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = ((long long)(n) * (long long)(n + 1)) / 2;
        if (isPerfectSquare(sum))
            cout << -1 << endl;
        else
        {
            vector<int> ans;
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += i;
                if (isPerfectSquare(sum))
                {
                    ans.push_back(i + 1);
                    ans.push_back(i);
                    sum += i + 1;
                    i += 1;
                }
                else
                {
                    ans.push_back(i);
                }
            }
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}