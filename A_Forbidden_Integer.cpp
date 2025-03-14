#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        int h=k;
        vector<int> v1;
        while (k > 0)
        {
            if (k != m)
                v1.push_back(k);
            k--;
        }
        k=h;
        int f = v1.size();
        if (f == 0)
            cout << "no" << endl;
        else
        {
            if (m != 1)
            {
                cout << "yes" << endl;
                cout << n << endl;
                for (int i = 0; i < n; i++)
                    cout << 1 << " ";
                cout << endl;
            }
            else
            {
                if (k == 2)
                {
                    if (n % 2 == 0)
                    {
                        cout << "yes" << endl;
                        cout << n / 2 << endl;
                        for (int i = 1; i <= n / 2; i++)
                            cout << 2 << " ";
                        cout << endl;
                    }
                    else
                        cout << "no" << endl;
                }
                else if (k == 3)
                {
                    if (n % 2 == 0)
                    {
                        cout << "yes" << endl;
                        cout << n / 2 << endl;
                        for (int i = 1; i <= n / 2; i++)
                            cout << 2 << " ";
                        cout << endl;
                    }
                    else
                    {
                        cout << "yes" << endl;
                        cout << n / 2 << endl;
                        for (int i = 1; i <= (n / 2) - 1; i++)
                            {cout << 2 << " ";}
                        cout << 3 << endl;
                    }
                }
                else if (k > 3)
                {
                    if (n % 2 == 0)
                    {
                        cout << "yes" << endl;
                        cout << n / 2 << endl;
                        for (int i = 1; i <= n / 2; i++)
                            cout << 2 << " ";
                        cout << endl;
                    }
                    else
                    {
                        cout << "yes" << endl;
                        cout << n / 2 << endl;
                        for (int i = 1; i <= (n / 2) - 1; i++)
                            cout << 2 << " ";
                        cout << 3 << endl;
                    }
                }
            }
        }
    }
}