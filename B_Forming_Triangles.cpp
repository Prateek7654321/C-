#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{int ans=1;
 for(int i=1;i<=n;i++)
 ans*=i;
 return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
            mp[x]++;
        }
        int ans=0;
        map<int,int> :: iterator it=mp.begin();
        while(it!=mp.end())
        {
            if(it->second>=3)
            {
                ans+=(fact(it->second)/6)/fact(it->second-3);
            }
            it++;
        }
        set<int>s;
        for(int i=0;i<n;i++)
        s.insert(v[i]);
        vector<int>t(s.begin(),s.end());
        if(s.size()==1)
        {
            
        }
        else if(s.size()==2)
        {
            if(mp[v[0]]>1)
            {
                int a=v[0];
                int b=v[0];
                int c=v[1];
                if(a+b>c&&b+c>a&&a+c>b)
                {
                    ans+=(fact(mp[v[0]])/2)/fact(mp[v[0]]-2);
                }
            }
            if(mp[v[1]]>1)
            {
                int a=v[0];
                int b=v[1];
                int c=v[1];
                if(a+b>c&&b+c>a&&a+c>b)
                {
                    ans+=(fact(mp[v[1]])/2)/fact(mp[v[1]]-2);

                }
            }
           
            
        }
        else
        {
            
            for(int i=0;i<t.size();i++)
            {
                t[i]=pow(2,t[i]);
            }
            int i=0;
            while(i<=t.size()-3)
            {
                int a=v[i];
                int b=v[i+1];
                int c=v[i+2];
                if(a+b>c&&b+c>a&&a+c>b)
                {
                    ans+=mp[a]*mp[b]*mp[c];
                }
                i++;
            }
        }
        cout<<ans<<endl;

    }
}