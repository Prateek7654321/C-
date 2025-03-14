#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        std::vector<std::vector<char>> v(m, std::vector<char>(n, ' '));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char p;
                cin >> p;
                v[i][j] = p;
            }
        }
        int row = INT_MIN;
        int ans = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            int t = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == '#')
                    t++;
            }
            if (ans < t)
            {
                ans = t;
                row = i + 1;
            }
        }
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[row - 1][i] == '#' && i == 0)
            {
                a = i;
            }
            if (v[row - 1][i] == '#' && v[row - 1][i - 1] == '.')
            {
                a = i;
            }
            if (v[row - 1][i] == '#' && i == n - 1)
            {
                b = i;
                break;
            }
            if (v[row - 1][i] == '#' && v[row - 1][i + 1] == '.')
            {
                b = i;
                break;
            }
        }
        // cout<<a<<" "<<b<<" ";
        int x = (a + b) / 2;
        cout << row  << " " << x + 1 << endl;
    }
}