#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int b;cin>>a>>b;
        string s=to_string(a);
        string s1=to_string(b);
        string t="";
        t+=s[s.size()-1];
        string t1="";
        t1+=s1[s1.size()-1];
        for(int j=s.size()-2;j>=0;j--)
        {
          if(stoll(s[j]+t)*stoll(s1[j]+t1)>stoll(s1[j]+t)*stoll(s[j]+t1))
          {
            t=s[j]+t;
            t1=s1[j]+t1;
          }
          else
          {
            t=s1[j]+t;
            t1=s[j]+t1;
          }
        }
        cout<<stoll(t)<<endl;
        cout<<stoll(t1)<<endl;
    }
}