#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        int j = 0;
        for (int i = (n / 2) + 1; i <= n; i++)
        {
            v[0][j] = i;
            j++;
        }
        for (int i = 1; i < (n / 2) + 1; i++)
        {
            v[0][j] = i;
            j++;
        }
        int i = 1;
        while (i <= n - 1)
        {
            int start = v[i - 1][n - 1];
            int j = 0;
            for (int k = start; k <= n; k++)
            {
                v[i][j] = k;
                j++;
            }
            for (int k = 1; k < start; k++)
            {
                v[i][j] = k;
                j++;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}