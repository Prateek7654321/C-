#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   if(n%2==0) 
   cout<<"NO"<<endl;
   else
   cout<<"YES"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=0; i<t; i++)
        solve();
}