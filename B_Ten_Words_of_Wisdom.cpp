#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a = 0;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v1.push_back(a);
            v2.push_back(b);
            v3.push_back(b);
        }
        sort(v3.begin(), v3.end());
        for (int j = n - 1; j >= 0; j--)
        {
            for (int i = 0; i < n; i++)
            {
                if (v3[j] == v2[i])
                {
                    if (v1[i] <= 10)
                    {
                        cout << i + 1 << endl;
                        a++;
                        break;
                    }
                }
            }
            if (a > 0)
                break;
        }
    }
}