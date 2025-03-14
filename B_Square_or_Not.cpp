#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int one=0;int zero=0;
        for(int i=0;i<s.size();i++)
        {if(s[i]=='0')
        zero++;
        else
        one++;}
        if(s=="1")
        cout<<"Yes"<<endl;
        else 
        {
          int sides=4;
          int i=0;bool flag=false;
          while(sides<=one)
          {
           if(sides==one&&i*i==zero)
           {flag=true;break;}
           sides+=4;
           i++;
          }
          if(flag)
          cout<<"Yes"<<endl;
          else
          cout<<"No"<<endl;
        }

    }
}