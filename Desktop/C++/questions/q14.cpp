#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        int a = 0;
        int b = 0;
        int h = s.size();
        if (s[0] == '0')
            cout << 0 << endl;
        else

        {
            for (int i = 0; i < h; i++)
            {
                if (s[i] == '?' && i != 0)
                {
                    a++;
                }
                if (s[i] == '?' && i == 0)
                {
                    b++;
                }
            }
            if (a == 0 && b == 0)
                cout << 1 << endl;
            if (a != 0 && b == 0)
                cout << pow(10, a) << endl;
            if (a == 0 && b != 0)
                cout << 9 << endl;
            if (a != 0 && b != 0)
                cout << 9 * pow(10, a) << endl;
        }
    }
}