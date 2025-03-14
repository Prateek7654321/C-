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
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
        }

        sort(v.begin(), v.end());
        bool flag = true;
        int sum = (long long)(n * (n + 1)) / 2;
        if (n % 2 == 0)
            cout << -1 << endl;
        else if (n == 3 || (n - 3) % 4 == 0)
        {
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
        else
        {
            do
            {
                flag = true;
                for (int i = 0; i < n; i++)
                {
                    int sum = 0;
                    for (int j = i; j < n; j++)
                    {
                        sum += v[j];
                        if (sum % (n + 1) == 0)
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (!flag)
                        break;
                }
                if (flag)
                    break;
            } while (next_permutation(v.begin(), v.end()));

            if (!flag)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}gtt  