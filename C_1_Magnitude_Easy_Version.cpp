#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        vector<pair<int,int>>v1(n,{0,0});
        int pos=0;
        int neg=0;
        int ans=0;
        for(int i=0;i<n;i++)
        { 
          pos+=v[i];
          neg+=v[i];
          if(neg<0)
          {ans=-1*neg;if(pos<ans)pos=ans;}
        }
         if(neg<0)
          {ans=-1*neg;if(pos<ans)pos=ans;}
          cout<<pos<<endl;
          
    }
}