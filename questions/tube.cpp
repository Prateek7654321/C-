#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {  int d=0;
        int x, y;
        cin >> x >> y;
        int a[x];
        int b[x];
        int c[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < x; i++)
        {
            cin >> b[i];
            c[i] = b[i];
        }
        for (int i = 0; i < x - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < x; j++)
            {
                if (b[j] < b[min])
                    min = j;
            }
            swap(b[min], b[i]);
        }
        for (int j = x - 1; j >= 0; j--)
        {
            for (int i = 0; i < x; i++)
            {
                if (c[i] == b[j])
                {

                    if (a[i] + i <= y)
                    {
                        cout << i + 1 << endl;
                        d++;
                        break;
                    }
                }
            }
            if (d != 0)
                break;
        }

        if (d==0)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}