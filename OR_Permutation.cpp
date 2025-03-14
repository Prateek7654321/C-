#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 1 << " " << 2 << " ";
        int a = 1;
        int b = 2;
        int j = 3;
        for (int i = 3; i <= n; i++)
        {
            if ((a | b) != j)
            {
                cout << j << " ";
                a = b;
                b = j;
                j++;
            }
            else
            {
                cout << j + 1 << " ";
                j++;
                a = b;
                b = j;
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}
