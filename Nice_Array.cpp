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
        int pos = 0;
        int neg = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                if (v[i] % k != 0)
                {
                    pos++;
                }
            }
            else
            {
                if (v[i] % k != 0)
                {
                    neg++;
                }
            }
            sum += v[i] / k;
        }
        if (sum == 0)
            cout << "YES" << endl;
        else if (sum > 0)
        {
            if (neg >= sum)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (pos >= -1 * sum)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}