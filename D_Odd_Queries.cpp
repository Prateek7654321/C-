#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<int>prefix(m);
        vector<int>suffix(m);
        prefix[0]=v[0];
        for(int i=1;i<m;i++)
        {
            prefix[i]=v[i]+prefix[i-1];
        }
        suffix[m-1]=v[m-1];
        for(int i=m-2;i>=0;i--)
        {
            suffix[i]=v[i]+suffix[i+1];
        }
        for(int i=0;i<n;i++)
        {
           int x,y,z;
           cin>>x>>y>>z;
           int ans=(abs(x-y)+1)*z;
    
           int a=x-1;
           int b=y-1;
           if(a-1>=0)
           ans+=prefix[a-1];
           if(b+1<m)
           ans+=suffix[b+1];
         
           if(ans%2!=0)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
        }

    }
}