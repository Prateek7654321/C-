#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k;
    cin >> n >> k;
    int x = 1;
    int pos = 0;
    int first = 0;
    int second = 0;

    int sum = 0;
    vector<char> ans(n, 'a');
    int l = 0;
    int r = n;
    int a = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (((1LL*mid * (mid + 1)) / 2) < k)
        {
            a = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    a++;
    int ind1 = (n - (a + 1));
    ans[ind1] = 'b';
    a--;
    sum = (a * (1 + a)) / 2;
    k -= sum;
    ans[n - k] = 'b';
    string s = "";
    for (int i = 0; i < ans.size(); i++)
        s = s + ans[i];
    cout << s << endl;
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