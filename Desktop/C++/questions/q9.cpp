#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a = 0;
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int min = arr[0];

        if (min % 2 == 0)
        {
            for (int i = 1; i < x; i++)
            {
                if (arr[i] % 2 != 0)
                {
                    cout << "no" << endl;
                    a++;
                    break;
                }
            }
            if (a == 0)
                cout << "yes" << endl;
        }
        else
        {
        cout<<"yes"<<endl;
        } 
    }
        return 0;
    }