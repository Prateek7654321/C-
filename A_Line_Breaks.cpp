#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int i = 0;
        int ans = 0;
        while (i < v.size())
        {
            if (v[i].size() <= k)
            {
                k -= v[i].size();
                ans++;
            }
            else
                break;
            i++;
        }
        cout << ans << endl;
    }
}