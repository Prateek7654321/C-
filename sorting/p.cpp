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
          int a = 0;
        int b = 0;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
            a=a+arr[i];
             if ((a / i + 1) * 100 == 100)
                b++;
        }
    
        cout << b << endl;
    }
    return 0;
}
