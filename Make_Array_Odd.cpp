#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = 0;
        if (y % 2 == 0)
            a = 0;
        else
            a++;
        vector<int> v;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < x; i++)
        {
            int x;
            cin >> x;
            if ((x & 1) == 1)
                odd++;
            else
                even++;
            v.push_back(x);
        }
        if (even == 0)
            cout << 0 << endl;
        else
        {
            if (a == 1)
            {
                cout << even / 2 + even % 2 << endl;
            }
            else
            {
                if (odd >= 1)
                {
                    cout << even << endl;
                }
                else
                    cout << -1 << endl;
            }
        }
    }
    return 0;
}
