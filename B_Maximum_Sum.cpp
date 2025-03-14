#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1000000007; 

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
        int sum = 0;
        int max = INT_MIN;
        int cursum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            cursum += v[i];
            if (v[i] > 0)
                sum += v[i];
            else
                sum = 0;
            if (cursum > sum)
                sum = cursum;
            if (max < sum)
                max = sum;
        }

        sum = (sum % P );
        max = max % P;
        int t = 1;
        for (int i = 0; i < k; i++)
        {
            t = t * 2 % P;
        }
        int ans = (sum + max * (t - 1) + P) % P; // Corrected calculation
        cout << ans << '\n';
    }
}
