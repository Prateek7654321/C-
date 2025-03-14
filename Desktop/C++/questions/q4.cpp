#include <bits/stdc++.h>
using namespace std;

int main()

   { int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int arr[n];
        int brr[n];
        int crr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            }
        
        for(int i=0;i<n;i++)
        {cin>>brr[i];
         crr[i] = brr[i] / arr[i];}
          
            sort(crr, crr + n);
            if (crr[0] < b)
                cout << b / crr[0] << endl;

            else
                cout << 0 << endl;
        }
        return 0;}

