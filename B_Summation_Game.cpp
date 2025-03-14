#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }
    vector<int> pre(n, 0);
    pre[0] = v[0];
    vector<int> suff(n, 0);
    suff[n - 1] = v[n - 1];
    int a = -1;
    for (int i = 1; i < n; i++)
      pre[i] = v[i] + pre[i - 1];
    for (int i = n - 2; i >= 0; i--)
      suff[i] = v[i] + suff[i + 1];
    int u = n - 1;
    int maxi = INT_MIN;
    for (int j = n - 1 - x; j >= 0; j--)
    {
      int f = 0;
      if (j == 0)
      {
        maxi = 0;
        break;
      }
      if (j == n - 1 - x)
        f = pre[j] - suff[j + 1];
      else
      {
        f = pre[j] - suff[j + 1] - suff[k];
        u--;
      }
      maxi = max(maxi, f);
      a++;
      if (a == x)
        break;
    }
    cout << maxi << endl;
  }
}