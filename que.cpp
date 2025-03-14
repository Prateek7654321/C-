#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   string s;
   cin>>s;
   int i=s.size()-1;
   int ops=0;
   int j=0;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]=='1')
    {j=i;break;}
   }
   while(i>j)
   {
      if(s[i]=='1') 
      {
          ops+=2;
      }
      else
      ops+=1;
      i--;
   }
   ops+=1;
   cout<<ops<<endl;

    return 0;
}