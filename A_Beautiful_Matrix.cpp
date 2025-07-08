#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<vector<int>> v(5, vector<int>(5, 0));
    int a = -1;
    int b = -1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(2 - a) + abs(2 - b) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
        solve();
}