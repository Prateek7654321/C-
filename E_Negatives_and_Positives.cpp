#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        int ans=0;
        for(int i=0;i<=n-2;i++)
        {
            if(v[i]<0)
            {  if(i==n-2)
                {
                    if(abs(v[i+1])>=abs(v[i]))
                    {
                        if(v[i+1]<0)
                        ans+=abs(v[i])+abs(v[i+1]);
                        else
                        ans+=abs(v[i+1]);
                    }
                    else
                    ans+=-1*v[i];
                }else{
                ans+=-1*v[i];
                v[i+1]=-1*v[i+1];}
               
            }
            else if(v[i]==0)
            {      if(i==n-2)
                {
                    ans+=abs(v[i+1]);
                }
                else if(v[i+1]<0)
                {ans+=v[i];v[i+1]=-1*v[i];}
              
            } 
            else
            {
                if(i==n-2)
                {
                    if(v[i+1]<0)
                    ans+=-1*v[i+1]+-1*v[i];
                    else
                    ans+=v[i]+v[i+1];
                }
                else
                ans+=v[i];
            }
        }
        cout<<ans<<endl;
    }
}