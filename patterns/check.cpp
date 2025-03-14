#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int min = 1000;
        int h[1000] ={0};
        int arr[n];
        for(int i  = 0 ; i<n ;i ++)
        {
            cin >> arr[i];
            h[arr[i]]++ ;
            if(arr[i] < min)
            min =arr[i];
        }
        int t = h[min];
        cout << n - t << endl;

    }
}