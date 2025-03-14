#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
       long long  int sm = n;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                sm = sm + (n / 2);
                n = n / 2;
            }
            else
            {
                n = n - 1;
                sm = sm + (n / 2);
                n = n / 2;
            }
        }
        cout << sm << endl;
    }
}