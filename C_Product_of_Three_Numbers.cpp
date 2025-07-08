#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int f = n;
    for (int i = 2; i * i <= f; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                v.push_back(i);
                n = n / i;
                if (v.size() == 3)
                    break;
            }
        }
        if (v.size() >= 3)
            break;
    }
   
    if (v.size() <= 1)
        cout << "NO" << endl;
    else if (v.size() == 2)
    {
        int a = v[0];
        int b = v[1];
        if (a != b)
        {
            int a = v[0];
            int b = v[1];
            int c = (f / (a * b));
            if (a != b && a != c && c != b)
            {
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        int a = v[0];
        int b = v[1];
        int c = v[2];
        int d = (f / (a * b * c));
        if (a != b && b != c * d)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c * d<<endl;
        }
        else if (a == b)
        {
            if (d != a && d != b * c&&d!=1)
            {
                cout << "YES" << endl;
                cout << a << " " << b * c << " " << d << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}