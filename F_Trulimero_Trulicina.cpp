#include <bits/stdc++.h>
using namespace std;
void applydfs(int i, int j, vector<vector<int>> &v, int value)
{
    int n = v.size();
    int m = v[0].size();
    v[i][j] = value;
    if (i - 1 >= 0 && v[i - 1][j] == -1)
    {
        applydfs(i - 1, j, v, 1 - value);
    }
    if (i + 1 < n && v[i + 1][j] == -1)
    {
        applydfs(i + 1, j, v, 1 - value);
    }
    if (j - 1 >= 0 && v[i][j - 1] == -1)
    {
        applydfs(i, j - 1, v, 1 - value);
    }
    if (j + 1 < m && v[i][j + 1] == -1)
    {
        applydfs(i, j + 1, v, 1 - value);
    }
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m, -1));
    applydfs(0, 0, v, 0);
    map<int, int> mp;
    vector<int> zero;
    vector<int> one;
    bool flag = false;
    int x = 1;
    int a = -1;
    int b = -1;
    int l = 0;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!flag)
            {

                if (v[i][j] == 0)
                {
                    v[i][j] = x;
                    zero.push_back(x);
                    x++;
                }
                else
                {
                    v[i][j] = x;
                    one.push_back(x);

                    x++;
                }
                if (x > k)
                {
                    flag = true;
                }
            }
            else
            {
                if (v[i][j] == 0)
                {
                    l = l % zero.size();
                    v[i][j] = zero[l];
                    l++;
                }
                else
                {
                    r = r % one.size();
                    v[i][j] = one[r];
                    r++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << endl;
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