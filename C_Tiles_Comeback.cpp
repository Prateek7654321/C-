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
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        int a = 1;
        int first = v1[0];
        int second = v1[n - 1];
        if (v1[0] == v1[n - 1])
        {
            for (int i = 1; i < n; i++)
                if (v1[i] == first)
                    a++;
            if (a >= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            int b = 0;
            int d=0;
            for (int i = 1; i < n; i++)
            {
                if (v1[i] == first)
                    a++;
                if (a == k)
                   { b = b + i;break;}
            }
            for (int i = b ; i < n; i++)
            {
                if (v1[i] == second)
                    d++;
            }
            if (a >= k && d >= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}