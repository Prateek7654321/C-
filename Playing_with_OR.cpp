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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int i = 0;
        int j = k - 1;
        int out = 0;
        int ans = v[0];
        for (int i = 0; i < j; i++)
        {
            ans = ans | v[i];
        }
        if (ans % 2 != 0)
            out++;
        i++;
        j++;
        while (j < n)
        {
            ans = (ans ^(v[i - 1])) | v[j];
            if (ans % 2 != 0)
                out++;
            i++;
            j++;
        }
        cout << out << endl;
    }
    return 0;
}
