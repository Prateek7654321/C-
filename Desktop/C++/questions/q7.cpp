#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a = a + arr[i];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int b = 0;
            for (int i = l - 1; i < r; i++)
            {
                b = b + arr[i];
            }
            int d = a - b + (r - l+1) * k;
            if (d % 2 != 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }

    return 0;
}