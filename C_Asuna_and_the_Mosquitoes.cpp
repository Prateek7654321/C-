#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> even, odd;
    vector<int>v;
    int maxi = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        maxi = max(maxi, x);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        even.push_back(v[i]);
        else
        odd.push_back(v[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if (even.size() == 0 || odd.size() == 0)
    {
        cout << maxi << endl;
    }
    else
    {

        int a = accumulate(even.begin(), even.end(), 0LL);
        a += odd.back();

        if (odd.size() > 1) { 
            for (int j = odd.size() - 2; j >= 0; j--) {
                a += odd[j] - 1;
            }
        }
        cout << a << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}
