#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int min;
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (arr[1] > arr[0])
        min = arr[1] - arr[0];
    else
        min = arr[0] - arr[1];
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i + 1] > arr[i])
        {
            int x = arr[i + 1] - arr[i];
            if (min >= x)
            {
                min = x;
                a = i + 1;
                b = i;
            }
        }

        else
        {
            int x = arr[i] - arr[i+1];
            if (min >= x)
            {
                min = x;
                a = i + 1;
                b = i;
            }
        }

    }
    if(arr[0]>arr[n-1])
    {
        if(min>arr[0]-arr[n-1])
        {
            a=0;
            b=n-1;
        }
    }
    else
    {
        if(min>arr[n-1]-arr[0])
        {
            a=0;
            b=n-1;
        }
    }
    cout << b+1 << " " << a+1 << endl;
}