// isomorphic string matlab agr string characters changing than further same characters pairs are same or not
#include<bits/stdc++.h>
using namespace std;
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        else
        {
           vector<int>v(150,700);
           for(int i=0;i<s.size();i++)
           {
               int a=(int)s[i];
               if(v[a]==700)
               v[a]=s[i]-t[i];
               else if(v[a]!=s[i]-t[i])return false;
           } 
           for(int i=0;i<150;i++)
           v[i]=700;
           for(int i=0;i<s.size();i++)
           {
             int b=(int)t[i];
             if(v[b]==700)
             {
                 v[b]=t[i]-s[i];
             }
             else if(v[b]!=t[i]-s[i])return false;
           }
           return true;
        }
        
    }
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
   int a= isIsomorphic(s, t);
   cout<<a;

}