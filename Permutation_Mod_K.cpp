#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1 || n == 1)
            cout << -1 << endl;
        else if (k == 2 && n % 2 != 0)
            cout << -1 << endl;
        else
        {
            vector<int> v(n, 0);
            for (int i = 0; i < v.size(); i++)
                v[i] = i + 1;
            for (int i = 1; i < n; i += 2)
            {
                swap(v[i], v[i - 1]);
            }
            if (n % 2 != 0)
                swap(v[n - 1], v[n - 2]);
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}