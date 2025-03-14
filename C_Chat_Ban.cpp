#include <bits/stdc++.h>
using namespace std;
#define int long long
int findindex(int x, int n, int k)
{
    int l = x + 1;
    int r = n;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int sum = ((long long)(mid) * (long long)(mid + 1)) / 2;
        if (sum < k)
        {
            l = mid + 1;
        }
        else if (sum == k)
        {
            return mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l;
}
int findindex1(int x, int n, int k)
{
    int l = x + 1;
    int r = n;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int sum = ((long long)(mid) * (long long)(mid + 1)) / 2;
        if (sum < k)
        {
            l = mid + 1;
        }
        else if (sum == k)
        {
            return n - mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return n - l + 1;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = ((long long)(n) * (long long)(n + 1)) / 2;
        int sum1 = ((long long)(n - 1) * (long long)(n)) / 2;
        int total = sum + sum1;
        if (k <= sum)
        {
            cout << findindex(0, n, k) << endl;
        }
        else if (k <= total)
        {
            cout << n + findindex1(0, n - 1, total - k) << endl;
        }
        else
            cout << 2 * n - 1 << endl;
    }
}