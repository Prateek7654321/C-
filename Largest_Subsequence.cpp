#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        bool flag=true;
        int mini=LLONG_MIN;
        int ina=-1;
        int inb=-1;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='a')
          {
            ina=i;break;
          }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                inb=i;break;
            }
        }
       int fina=-1;
       int finb=-1;
       for(int j=s.size()-1;j>=0;j--)
       {
        if(s[j]=='a')
        {
            fina=j;break;
        }
       }
        for(int j=s.size()-1;j>=0;j--)
       {
        if(s[j]=='b')
        {
            finb=j;break;
        }
       }
       cout<<max(finb-inb,fina-ina)+1<<endl;
    }
}