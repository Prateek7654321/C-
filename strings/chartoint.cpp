#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n=s.size();
  int sum=0,i=0;
  while(n>0)
  {
    sum=sum+(s[i]-'0')*pow(10,n-1);
    n--;
    i++;
  }
  cout<<sum;
}