#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            if (x % y == 0)
                cout << 0 << endl;
            else
            {
                int a = x;
                int b = y;
                int t = 0;
                while (a > b)
                {
                    a--;
                    b++;
                    t++;
                    if (a % b == 0)
                        break;
                }
                if (a % b != 0)
                    t = 0;
                a = x;
                b = y;
                int t1 = 0;
                while (b > 1)
                {
                    a++;
                    b--;
                    t1++;
                    if (a % b == 0)
                        break;
                }
                if (t == 0)
                    cout << t1 << endl;
                else
                {
                    if (t > t1)
                        cout << t1 << endl;
                    else
                        cout << t1 << endl;
                }
            }
        }
        else
        {
            int t1 = 0;
            int u = x;
            int v = y;
            while (v > 1)
            {
                u++;
                v--;
                t1++;
                if (u % v == 0)
                    break;
            }
            cout << t1 << endl;
        }
    }
    return 0;
}
