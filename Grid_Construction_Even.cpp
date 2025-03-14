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
        for (int i = 0; i < n; i++)
            v[i][0] = i + 1;
        int j = 1;
        while (j < n)
        {
            if (j % 2 != 0)
            {
                for (int i = 0; i < n; i += 2)
                {
                    v[i][j] = v[i +1][j - 1];
                    v[i+1][j] = v[i][j-1];
                }
            }
            else
            {
                v[0][j] = v[n - 1][j - 1];
                v[n - 1][j] = v[0][j - 1];
                for (int i = 1; i <= n - 3; i += 2)
                {
                   v[i][j] = v[i +1][j - 1];
                    v[i+1][j] = v[i][j-1];
                }
            }
            j++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << v[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
}