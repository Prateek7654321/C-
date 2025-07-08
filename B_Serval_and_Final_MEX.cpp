#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x == 0)
            flag = true;
    }
    if (!flag)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        if (v[0] != 0)
        {
            cout << 2 << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
        }
        else if (v[n - 1] != 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
            cout << 1 << " " << n / 2 << endl;
            int rem=(n-n/2);
            cout<<2<<" "<<2+rem-1<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}