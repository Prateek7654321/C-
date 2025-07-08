#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int sum = 0;
    int sum1 = 0;
    vector<int> v;
    vector<int> v1;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        sum1 += x;
    }
    sort(v1.begin(), v1.end());
    int x = 0;
    int a = 0;
    int b = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (x < k)
        {
            a += v[i];
            b += v1[i];
            x++;
        }
        else
            break;
    }
    cout<<a<<" "<<b<<endl;
    cout<<sum<<" "<<sum1<<endl;
   
    if (sum > sum1)
        cout << sum + b  << endl;
    else
        cout << sum1 + a  << endl;
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