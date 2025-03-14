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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int mid = 0;
        int element;
        (n % 2 == 0) ? (element = v[n / 2 - 1], mid = n / 2 - 1) : (element =v[ n / 2], mid = n / 2);

        int ans = 1;
       

        for (int i = mid + 1; i < v.size(); i++)
        {
            if (v[i] == element)
                ans++;
            else
                break;
        }
        cout << ans << endl;
    }
}