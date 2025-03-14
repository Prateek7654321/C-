#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        v[n - 1] = n-1;
        v[n - 2] = n ;
        for (int i = 0; i < n - 2; i++)
        {
            if (k % 2 != 0)
            {
                v[i] = n;
            }
            else
                v[i] = n - 1;
        }
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}