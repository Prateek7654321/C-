#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if(n%2!=0)
    {
        cout<<0<<endl;
        return ;
    }
    n = n / 2;
    if(n==1||n==2||n==0)
    cout<<0<<endl;
    else if (n % 2 != 0)
    {
        cout << (n - 1) / 2 << endl;
    }
    else
    {
        cout << (n - 2) / 2 << endl;
    }
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