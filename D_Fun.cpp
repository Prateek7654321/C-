#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        int f=min(n,x);
        int ans=0;
        for(int i=1;i<=f;i++)
        {
          int sum=i;
          int a=sum;
          int j=i;
          int k=f;
          while(j<=k)
          {
            if(sum+j+k<=x)
            {
                if((long long)a*j+(long long)j*k+(long long)a*k<=n)
                ans++;
                j++;
            }
            else
            k--;
          }
        }
        cout<<ans<<endl;
        
    }
}