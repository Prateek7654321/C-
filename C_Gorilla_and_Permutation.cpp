#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=n;i>=m+1;i--)
        cout<<i<<" ";
        for(int i=1;i<=m;i++)
        cout<<i<<" ";
        cout<<endl;
    }
}