#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int x;
        cin >> x;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < x; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        for (int i = 0; i < x; i++)
        {
            int y;
            cin >> y;
            v1.push_back(y);
        }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end(), greater<int>());
        int f = v[0] + v1[0];
        for (int i = 1; i < x; i++)
        {
            if (v1[i] + v[i] == f)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < x; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < x; i++)
            {
                cout << v1[i] << " ";
               
            }
             cout << endl;
        }
    }
}
