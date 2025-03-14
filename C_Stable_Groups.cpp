#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    vector<int> diff;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > x)
        {
            diff.push_back(v[i] - v[i - 1]);
        }
    }
    sort(diff.begin(), diff.end());
    int i = 0;
    while (i < diff.size() && k > 0)
    { int req=-1;
  
        if (diff[i] % x == 0)
        {
            req = diff[i] / x - 1;
        }
        else
        {
            req = diff[i] / x;
        }
        if (req <= k)
        {
            k -= req;
            i++;
        }
        else
            break;
    }

    cout << diff.size() - i+1 << endl;
}