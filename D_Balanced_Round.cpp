#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<int> v1;
        for (int i = 0; i < n; i++)
            {
                long long int x;
                cin >> x;
                v1.push_back(x);
            }
        if (n == 1)
            cout << 0 << endl;
        else
        {
            
            sort(v1.begin(), v1.end());
            vector<int> v2;
           long long  int a = 0;
            for (int i = 1; i < n; i++)
            {
                if (v1[i] - v1[i - 1] <= k)
                {
                    a++;
                    if (i == n - 1)
                        v2.push_back(a);
                }
                else
                {
                  
                    v2.push_back(a);  a = 0;
                }
            }
            int f = v2.size();
            sort(v2.begin(), v2.end());
            cout << n - v2[f - 1] - 1 << endl;
        }
    }
}