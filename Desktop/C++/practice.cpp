#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    { 
      string s;
      cin>>s;
      int p=s.size();
      
      int a=0;
      for(int j=0;j<p/2;j++)
      {
        if(s[0]!=s[j])
        a++;
      }
      if(p>3&&a>=1)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
      
    }
      
    
}