#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int a = 0;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x; i++)
        {
            if ((i - arr[i]) >= -1)
            {
                cout << "yes" << endl;
                a++;
                break;
            }
        }
    
    if (a == 0)
        cout << "no" << endl;}
}
