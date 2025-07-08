#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n), v1(n);
    for (int &x : v)
        cin >> x;
    for (int &x : v1)
        cin >> x;

    vector<pair<int, int>> nums;
    for (int i = 0; i < n; i++)
    {
        nums.emplace_back(v[i], v1[i]);
    }

    sort(nums.begin(), nums.end());

    vector<int> mini(n, INT_MAX);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            mini[i] = nums[i].second;
        else
            mini[i] = min(nums[i].second, mini[i + 1]);
    }

    int i = 0;
    int energy = 0;
    while (i < n && k >= 0)
    {
        energy += k;
        auto index = upper_bound(nums.begin(), nums.end(), make_pair(energy, INT_MAX)) - nums.begin();
        if (index >= n)
        {
            i = index;
            break;
        }
        k -= mini[index];
        i = index;
    }

    cout << (i >= n ? "YES" : "NO") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
