#include <bits/stdc++.h>
using namespace std;
#define int long long
// jai shree ram
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pizza;
        cin >> pizza;
        if ((pizza & (pizza - 1)) == 0)
        {
            cout<<0<<endl;
        }
        else{
        int largestPower = 1;
        while (largestPower * 2 < pizza)
        {
            largestPower *= 2;
        }

      
        cout<< (pizza - largestPower) * 2<<endl;
        }
    }
}
