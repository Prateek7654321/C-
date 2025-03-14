#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == 1)
            cout << x << endl;
        else
        {
            vector<int> v;
            int presentOr = 0;
            for (int i = 0; i <= min(n, x); i++)
            {
                if ((i | x) == x)
                {
                    v.push_back(i);
                    presentOr = (presentOr | i);
                }
                if (v.size() == n)
                    break;
            }

            if (presentOr == x)
            {
                while (v.size() < n)
                    v.push_back(0);
            }
            else
            {
                if (v.size() == n)
                    v.pop_back();
                v.push_back(x);
                while (v.size() < n)
                    v.push_back(0);
            }
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}