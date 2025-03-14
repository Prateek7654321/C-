#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,n;
        cin>>h>>n;
        vector<int>v;vector<int>v1;int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);sum+=x;
        }
         for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v1.push_back(x);
        }
        int ans=1;
        if(sum>=h)
        {
            cout<<ans<<endl;
        }
        else
        {h-=sum;
            vector<pair<int,int>>v3;
            for(int i=0;i<n;i++)
            {
                pair<int,int>p;
                p.first=v1[i];
                p.second=v[i];
                v3.push_back(p);
            }
            sort(v3.begin(),v3.end());
            int f=INT_MAX;
            int a=0;
            int c=0;
            
            for(int i=0;i<n;i++)
            { 
              a+=v3[i].second;int x;
              if(a>h)
              {
                x=1;
              }else{
               if(h%a==0)
               {
                x=h/a;
               }
               else
               x=h/a+1;
               cout<<x<<" ";}
              if(f>=x*v3[i].first)
              {
                f=x*v3[i].first;c=h-a;
              }
              cout<<f<<" ";
             
            }
            
         
            
            ans+=f;h=c;
            if(h<=0)
            cout<<ans<<endl;
            else
            {
              for(int i=0;i<n;i++)
              {
                if(v3[i].second>=h)
                {
                    ans+=v3[i].second;break;
                }
              }
              cout<<ans<<endl;
            }
        }
        
    }
}