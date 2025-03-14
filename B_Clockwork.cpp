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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            int left = i - 0;
            int right = n - i - 1;
            if (v[i] <= 2 * left || v[i] <= 2 * right)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}