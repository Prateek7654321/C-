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
        int a = 0;
        for (int i = 0; i < x - 1; i++)
        {
            if (arr[i] == arr[i + 1])
                a++;
        }

        if (arr[0] == 1)
        {
            if (a == 0)
                cout << 1 << endl;
            else
            {
                for (int i = 0; i <  a+1; i++)
                {
                    cout << 0;
                }
                int b = x -  (a+1);
                
                for (int i = 0; i < b; i++)
                {
                    if (i % 2 == 0)
                        cout << 1;
                    else
                        cout << 0;
                }
                cout<<endl;
            }}
        else
            { if (a == 1)
                cout << 0<< endl;
            else
            {
                for (int i = 0; i <  a+1; i++)
                {
                    cout << 1;
                }
                int b = x -  (a+1);
                
                for (int i = 0; i < b; i++)
                {
                    if (i % 2 == 0)
                        cout << 0;
                    else
                        cout << 1;
                }
                cout<<endl;

            }
        }
    
    }
    return 0;
}
