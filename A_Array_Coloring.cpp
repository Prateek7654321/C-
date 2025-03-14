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
        vector<int> v1;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if ( odd == 0)
            cout << "YES" << endl;
    
        else
        {
            if (odd % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}