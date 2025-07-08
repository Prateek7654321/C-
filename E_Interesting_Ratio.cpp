#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(vector<bool>&prime)
{
    int n;
    cin >> n;
  
    vector<int> pref(n + 1, 0);
    for (int i = 2; i <=n; i++)
    {
        if (prime[i])
            pref[i] += 1;
        pref[i] += pref[i - 1];
    }
    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        int x = n / i;
        if (x > 1)
            ans += pref[x];
    }
    cout << ans + pref[n] << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    vector<bool> prime(1e7+1, true);
    for (int i = 2; i * i <= 1e7; i++)
    {
        if (prime[i])
        {
            for (int j = 2; j * i <=1e7; j++)
            {
                prime[j * i] = false;
            }
        }
    }

    for (int i = 0; i < t; i++)
        solve(prime);
}