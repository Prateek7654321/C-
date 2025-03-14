#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string p ;
  p=s;
 reverse(s.begin(),s.begin()+s.length());  
  if(p==s)
  cout<<1;
  else
  cout<<0;
}