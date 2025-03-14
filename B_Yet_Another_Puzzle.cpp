#include <bits/stdc++.h>
using namespace std;
#define int long long
#include <numeric>
signed main()
{
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
        cout << 0 << endl;
    else
    {
        if (m == 1)
        {
            for (int i = 1; i <= n; i++)
                cout << i + 1 << endl;
        }
        else
        {
            vector<vector<int>> ans(n, vector<int>(m, 0));
            int k = 2;
            for (int i = 0; i < m; i++)
            {
                ans[0][i] = k;
                k++;
            }
            k = ans[0][m - 1];
            if (k % 2 != 0)
                k += 1;
            else
                k += 2;
            for (int i = 1; i < n; i++)
            {
                if (i == 1)
                    ans[i][0] = k;
                else
                    ans[i][0] = ans[i - 1][0] + 2;
            }
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < m; j++)
                {
                    ans[i][j] = std::lcm(ans[i][0], ans[0][j]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}