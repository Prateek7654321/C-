#include <iostream>
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (isPrime(x))
            cout << 1 << endl;
        else
        {
            int f = 1;
            int a = x;
            int t = 0;
            while (a >= 0)
            {
                 a = a - f;
                t++;
                if (isPrime(a))
                    break;
                f = f * 2;
            }
       
            if (a >= 0)
            {
                if (a == 0)
                    cout << t << endl;
                else
                    cout << t + 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
       
    }
     return 0;
}