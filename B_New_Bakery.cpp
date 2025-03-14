#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,a,b;
     cin>>n>>a>>b;
     int ans=INT_MIN;
     if(b<=a)
     {
        cout<<n*a<<endl;
     }else
     {
        if(b-a<=n)
        { int k=b-a;
            cout<<((k)*(2*b+(k-1)*(-1)))/2+(n-k)*a<<endl;
        }
        else
        {
            cout<<n*(2*b-n+1)/2<<endl;
        }
     }
    
    }
}