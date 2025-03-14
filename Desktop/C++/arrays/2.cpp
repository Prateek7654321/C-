#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        int t = 1;
        while (arr[j]--)
        {
            t = t * arr[j];   
        }
        arr[j] = t;
    }

    for (int j = 0; j < n; j++)
    {
        cout << " " << arr[j];
    }
    return 0;
}