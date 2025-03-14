#include<bits/stdc++.h>
using namespace std;
#define int long long
const int m=1e9+7;
signed main()
{  int t;
cin>>t;
while(t--)
{
   int n,k;
   cin>>n>>k;
   cout<<((long long)(n%m*(n-1)%m)%m+n)%m<<endl;

}}