#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v;
    vector<int> v1(n, -1);
    int t = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }

    pair<int, int> p;
    p = {-2, -2};
    for (int i = 0; i < q; i++)
    {
        t++;
        int x;
        cin >> x;
        if (x == 2)
        {
            int f;
            cin >> f;
            sum = (long long)(n * f);
            cout << sum << endl;
            p = {t, f};
        }
        else
        {
            int a, b;
            cin >> a >> b;
            if (p.first > v1[a - 1])
            {
                sum -= p.second;
                sum += b;
                v[a-1]=b;
                v1[a - 1] = t;
            }
            else
            {
                sum -= v[a - 1];
                sum += b;
                v1[a - 1] = t;
                v[a - 1] = b;
            }
            cout<<sum<<endl;
        }
    }
}