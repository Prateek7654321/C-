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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 1)
        {
            cout << v[0] << endl;
            continue;
        }

        vector<int> v_copy = v;
        sort(v_copy.begin(), v_copy.end());

        int max_value = v_copy[n-2];
        cout << max_value << endl;
    }
    return 0;
}
