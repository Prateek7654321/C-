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
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x); 
        }
        int answer=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int y;
            cin>>y;
            v1.push_back(y);
        }
        unordered_map<int,int>mp;
        int a=1;
      
        for(int i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
            {
                a++;
            }
            else
            {
                if(mp[v[i-1]]!=0)
                {
                    int value=mp[v[i-1]];
                    if(value<a)
                    {mp[v[i-1]]=a;
                    if(answer<a)
                    answer=a;}


                }
                else
               { mp[v[i-1]]=a;
               if(answer<a)
                    answer=a;}
                a=1;
            }
           
        }
        if(mp[v[n-1]]<a)
        {
            mp[v[n-1]]=a;
            if(answer<a)
                    answer=a;
        }
        int ans=INT_MIN;
        int f=1;
        for(int i=1;i<v1.size();i++)
        {
            if(v1[i]==v1[i-1])
            {
                f++;
            }
            else
            {
             if(ans<mp[v1[i-1]]+f)
             ans=mp[v1[i-1]]+f;
             f=1;   
            }
        }
        if(f+mp[v1[n-1]]>ans)
        ans=f+mp[v1[n-1]];
        if(answer>ans)
        ans=answer;
        

       cout<<ans<<endl;
    }
}