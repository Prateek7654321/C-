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
        int negative = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x < 0)
                negative++;
        }
        int positive = abs(negative - n);
        if (positive >= negative)
        {
            if (negative % 2 == 0)
                cout << 0 << endl;
            else

                cout << 1 << endl;
        }

        // else
        // {
        //     if (positive != 0)
        //     {
        //         int k = negative - positive;
        //         if (k % 2 == 0)
        //         {
        //             negative = negative - k / 2;
        //             positive += k / 2;
        //             cout << k / 2 << endl;
        //         }
        //         else
        //         {
        //             negative -= (k / 2 + 1);
        //             positive += k / 2 + 1;
        //             ;
        //             cout << k / 2 + 1 << endl;
        //         }
        else
        {
            int k = negative - positive;
            if (k % 2 == 0)
            {
                int f = negative - k / 2;
                if (f % 2 == 0)
                    cout << k / 2 << endl;
                else
                    cout << k / 2 + 1 << endl;
            }
            else
            {
                if((negative-k)%2==0)
                cout<<k<<endl;
                else
                cout<<k+1<<endl;
            }
        }
    }
}
