#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    int i = 0;
    int j = v.size() - 1;
    vector<int> ans;
    for (int k = s.size() - 1; k >= 0; k--)
    {
        if (s[k] == '>')
        {
            ans.push_back(v[j]);
            j--;
        }
        else
        {
            ans.push_back(v[i]);
            i++;
        }
    }
    ans.push_back(v[i]);
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}