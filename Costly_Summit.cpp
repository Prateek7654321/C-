#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve()
{
    int n, cost;
    cin >> n >> cost;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<int> freq;
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
        {
            freq.push_back(count);
            count = 1;
        }
    }
    freq.push_back(count);
    sort(freq.begin(), freq.end());
    int present = 1;
    int ans = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        int sum = (freq[i] * (2 * present + freq[i] - 1)) / 2;
        if (sum >= cost)
            ans += cost;
        else
        {
            ans += sum;
            present = present + (freq[i]);
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}