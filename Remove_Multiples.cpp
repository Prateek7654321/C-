#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector<int> v1;
        vector<int> v(n, 0);
        for (int i = 0; i < m; i++)
        {
            long long int x;
            cin >> x;
            v1.push_back(x);
            v[v1[i] - 1]++;
        }
        long long int cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
                cost += i + 1;
        }
        cout << cost << endl;
    }
    return 0;
}
