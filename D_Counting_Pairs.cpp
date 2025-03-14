#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int index = lower_bound(v.begin(), v.end(), sum - v[i] - b) - v.begin();
            int index1 = upper_bound(v.begin(), v.end(), sum - v[i] - a) - v.begin();
            index1--;
            if (index == n)
                index--;
            if (v[index] >= sum - v[i] - b && v[index1] <= sum - v[i] - a)
            {
                if (i >= index && i <= index1)
                    ans += index1 - i;
                else if (index > i && index1 > i && index1 >= index)
                    ans += index1 - index + 1;
             }
        }
        cout << ans << endl;
    }
}