#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,m,k;cin>>n>>m>>k;
       int a=0;int b=0;
       if(n>=k)
       n=k;
       if(m>=k)
       m=k;
       cout<<n*m<<endl;
    }
}