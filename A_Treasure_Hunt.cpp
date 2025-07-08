#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x=k%(n+m);
    x=x+0.5;
    if(x<n)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
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
