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
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        if (v1 == v2)
            cout << 0 << endl;
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (v1[i] == v2[i])
                    continue;
                else
                {

                    cout << v1[i] << endl;
                    break;
                }
            }
        }
    }
}
