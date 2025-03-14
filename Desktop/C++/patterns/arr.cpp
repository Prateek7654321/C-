#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int t = 0;
        int y = 1000;
        for (int j = 0; j < n; j++)
        {
            if (y > arr[j])
                y = arr[j];
        }

        for (int k = 0; k < x; k++)
        {
            if (y < arr[k])
                t++;
        }
        if (t > 0)
            cout << t << endl;
        
        else if (t == 0)
            cout << 0 << endl;
    }
    return 0;
}
