#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            int mul = abs(h - v1[i]);
            if (mul % k == 0&&mul!=0)
            {
                int h = mul / k;
                if (h <= m - 1)
                    a++;
            }
        }
        cout << a << endl;
    }
}