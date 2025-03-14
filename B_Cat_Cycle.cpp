#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(n%2==0)
        {
         k=k%n;
         if(k==0)
         ans=n;
         else
         ans=k;
        }
        else
        {
            int first=(n+1)/2;
            int diff=n/2;
            if(k<first)
            {
                ans=k;
            }
            else
            {
                int posa=0;
                
                int last=((k-first)/diff)+1;
                int time=first+(long long)((long long)last-1)*(long long)diff;
                if(time%n==0)
                posa=1;
                else
                posa=n-(time%n)+1;
                int posb=0;
                if(posa<n)
                posb=posa+1;
                else
                posb=1;
                ans=posb+(k-time);
                if(ans>n)
                ans=ans%n;
            }
        }
        cout<<ans<<endl;
    }
}