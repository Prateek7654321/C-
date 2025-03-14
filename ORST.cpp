#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            v1.push_back(y);
        }
        for (int i = 0; i <= m; i++)
        {
            if (v1[i] >= n)
            {
                sort(v.begin(), v.end());
                break;
            }
            else
            {    for (int k = 0; k <=n - v1[i]; k++) {
                sort(v.begin()+k,v.begin()+v1[i]+k-1);
                
            }
            }
        }
         for (int k = 0; k < n; k++)
            cout << v[k] << " ";
        cout << endl;
    }
}
