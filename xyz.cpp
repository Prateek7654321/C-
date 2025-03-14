#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i!=j )
            {
                arr[i] = arr[i] + 1;
            }
            if (arr[j] < 0)
                flag = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    if (flag == 1)
        cout << "Wrong Input";
    else
        cout << sum;
}