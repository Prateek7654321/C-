#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            v[i][j] = s[j] - '0';
        }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));
    bool flag = true;
    for (int i = 0; i < m; i++)
    {
        if (v[0][i] == 1)
            vis[0][i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] == 1)
            vis[i][0] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 1)
            {
                bool flags = true;
                bool flagss = true;
                for (int k = 0; k < i; k++)
                {
                    if (v[k][j] == 0)
                    {
                        flags = false;
                        break;
                    }
                }
                for (int k = 0; k < j; k++)
                {
                    if (v[i][k] == 0)
                    {
                        flagss = false;
                        break;
                    }
                }
                if (flags == false && flagss == false) 
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == false)
            break;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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