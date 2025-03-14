#include <bits/stdc++.h>
using namespace std;
int findans(int index, vector<int> &v)
{
    int l = 0;
    int r = index;
    int ans = 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int k = index - mid + 1;
        if (v[mid] / k >= 1)
        {
            ans = max(ans, k);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
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
        vector<int> ans;
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(findans(i, v));
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}