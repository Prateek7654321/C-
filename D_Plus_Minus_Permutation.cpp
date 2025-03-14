#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int i = 1;
        int ans = 0;
        int one = 0;
        int temp = x;
      int f=k*x/__gcd(k,x);
        f=n/f;
        k=n/k-f;
        x=n/x-f;
        ans-=(long long)(x*(x+1))/2;
        ans+=(long long)(k*(2*n+(k-1)*-1))/2;
        cout<<ans<<endl;
    }
}