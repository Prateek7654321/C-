#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string p;string q;
      cin>>p;cin>>q;
      char a=p[0];
      char b=q[0];
      p[0]=b;
      q[0]=a;
      cout<<p<<" "<<q<<endl;
    }
}