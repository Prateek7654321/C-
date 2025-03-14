#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        if (zero == 0)
            cout << "DRAW" << endl;
        else if (zero==1)
            cout << "BOB" << endl;
        else
        {
            if (zero % 2 == 0)
                cout << "BOB" << endl;
            else
                cout << "ALICE" << endl;
        }
    }
}