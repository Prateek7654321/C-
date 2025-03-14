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
        for (int i = 0; i < n-1; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        ans.push_back(1);
        int i = 0;
        while (i < v.size())
        {
            int n = ans.size() - 1;
            ans.push_back(v[i] - ans[n]);
            i++;
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}