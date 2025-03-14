#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (b + c >= a)
        {
            cout << 2 * a - 1 << endl;
        }
        else
        {
            cout << 2 * (b + c) + 1 << endl;
        }
    }
}