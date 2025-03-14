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
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            v1.push_back(x);
        }
        int a = 0;
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
        {
            if (v1[i] % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    a++;
                else
                    break;
            }
            if (v1[i] % 2 != 0)
            {
                if (v[i] % 2 != 0)
                    a++;
                else
                    break;
            }
        }
        if (a == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}