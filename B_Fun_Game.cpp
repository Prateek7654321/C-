#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string p,q;
        cin>>p>>q;
        bool flag=true;
        bool flags=false;
      for(int i=0;i<p.size();i++)
      { if(p[i]=='1')
        {flags=true;}
        if(p[i]=='0'&&q[i]=='1')
        {   if(flags==false)
           { flag=false;break;}
        }
      }
      if(flag==false)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
    }
}