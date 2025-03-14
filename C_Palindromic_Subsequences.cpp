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
        vector<int> v(n, 1);
        v[n / 2] = 2;
        v[n - 1] = 2;
        for (int i = 2; i < n - 2; i++)
        {
            v[i] = i;
        }
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}