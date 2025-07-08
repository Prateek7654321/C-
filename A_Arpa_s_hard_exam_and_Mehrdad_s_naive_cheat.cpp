#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int x = n % 4;
    if(n==0)
    cout<<1<<endl;
    else if (x == 1)
        cout << 8 << endl;
    else if (x == 2)
        cout << 4 << endl;
    else if (x == 3)
        cout << 2 << endl;
    else if (x == 0)
        cout << 6 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}