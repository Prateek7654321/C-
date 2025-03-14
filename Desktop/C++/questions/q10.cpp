#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <set>
using namespace std;
int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        long long int x, k;
        cin >> x >> k;
        int n1, n2;
        float d = sqrt(4 * x * x - 8 * (x * x - x - 2 * k));
        int h = sqrt(4 * x * x - 8 * (x * x - x - 2 * k));
    
        if (h == d)
        {
            n1 = (2 * x + h);
            n2 = (2 * x - h);

            if (h >= 0)
            {
                if (n1 > 0)
                {
                    if (n1 % 4 == 0)
                    {
                        int a = n1 / 4;
                        cout << "yes" << endl;
                        for (int i = 0; i < a; i++)
                        {
                            cout << 1 << " ";
                            if (i < x - a)
                                cout << -1 << " ";
                        }

                        cout << endl;
                    }
                    else
                        cout << "no" << endl;
                }
                else
                {
                    if (n2 > 0 && n2 % 4 == 0)
                    {
                        long long int a = n2 / 4;
                        cout << "yes" << endl;
                        for (int i = 0; i < a; i++)
                        {
                            cout << 1 << " ";
                            if (i < x - a)
                                cout << -1 << " ";
                        }

                        cout << endl;
                    }
                    else
                        cout << "no" << endl;
                }
            }
            else
                cout << "no" << endl;
        }
    
    else
     cout << "no" << endl;
}

return 0;
}