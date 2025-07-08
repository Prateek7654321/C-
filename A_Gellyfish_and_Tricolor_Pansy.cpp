#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = min(a, c);
    int y = min(b, d);
    if (x >= y)
        cout << "Gellyfish" << endl;
    else
        cout << "Flower" << endl;
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