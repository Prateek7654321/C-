#include <bits/stdc++.h>
using namespace std;
void calculateString(int size, string s, int &ans)
{
    int l = 0;
    int r = 0;
    vector<int> freq(10, 0);
    while (r < s.size())
    {
        freq[s[r] - '0']++;
        if (r - l + 1 == size)
        {
            int distinict = 0;
            int maxi = INT_MIN;
            for (int i = 0; i < 10; i++)
            {
                if (freq[i] > 0)
                {
                    distinict++;
                    maxi = max(maxi, freq[i]);
                }
            }
            if (maxi <= distinict)
                ans++;
            freq[s[l] - '0']--;
            l++;
        }
        r++;
    }
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 1;
    int r = 100;
    int ans = 0;
    while (l <= r)
    {
        if (l > s.size())
            break;
        calculateString(l, s, ans);
        l++;
    }
    cout << ans << endl;
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