#include <bits/stdc++.h>
using namespace std;
#define int long long
int binary_pow(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base);
        }
        base = base * base;
        exp = exp >> 1;
    }
    return result;
}
void solve(vector<int> &pref)
{
    int n;
    cin >> n;
    cout << pref[n] << endl;
}

signed  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    vector<int> pref(56, 0);
    for (int i = 1; i <= 55; i++)
    {
        pref[i] += binary_pow(2, i) + pref[i - 1];
    }
    for (int i = 0; i < t; i++)
        solve(pref);
}