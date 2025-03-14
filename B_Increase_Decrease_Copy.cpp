#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        for(int i=0;i<n+1;i++)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        int ans=0;
        vector<pair<int,int>>v3;int index=-1;
        int target=v1[n];
        for(int i=0;i<n+1;i++)
        {
            pair<int,int>p;
            if(i!=n)
            {
                p.first=v[i];
                p.second=v1[i];
                ans+=abs(v[i]-v1[i]);
            }
            else
            {
                p.first=v1[i];
                p.second=v1[i];
            }
            v3.push_back(p);
        }
     
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(v3[i].first>=target&&v3[i].second<=target||(v3[i].first<=target&&v3[i].second>=target))
            {
                flag=true;
                break;
            }
        }
       
        if(flag==true)
        {
         cout<<ans+1<<endl;
        }
        else
        {
            int t=INT_MAX; int number=0;
            for(int i=0;i<n;i++)
            {
                int a=abs(v[i]-target);
                
                    if(a<t)
                    {
                        t=a;
                        number=v[i];
                    }
                
                int b=abs(v1[i]-target);
                    if(b<t)
                    {
                        t=b;number=v1[i];
                    }
            }
            cout<<ans+t+1<<endl;
        }


    }
}