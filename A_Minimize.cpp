#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
      
        int diff=b-a;
    int ans=a+diff/2;
    cout<<ans-a+b-ans<<endl;
      
    }
}