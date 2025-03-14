#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
         if (a == b)
            cout << "yes" << endl;
        if (a > b)
        {
            while (a > b)
            {
                a = a - 1;
                b = b + 1;
                if (a == b)
                {
                    cout << "yes" << endl;
                    break;
                }
            }
            if (a < b)
                cout << "no" << endl;
        }
        if (a < b)
        {
            while (b > a)
            {
                b = b - 1;
                a = a + 3;
                if (a == b)
                {
                    cout << "yes" << endl;
                    break;
                }
            }
            if (a > b)
                cout << "no" << endl;
        }
       
    }
    return 0;
}
