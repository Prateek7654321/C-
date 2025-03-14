#include<bits/stdc++.h>
using namespace std;
# define int long long
bool verify(int no,vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        if((v[i]^no)>=v[i])
        return false;
    }
    return true;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int maxi=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            maxi=min(maxi,x);
        }
        int ans=v[0];
       
        for(int i=0;i<v.size();i++)
        {
          ans=ans&v[i];
        }
        int x=0;int a=0;
       for(long long i=1;i<=(1LL<<30);i*=2)
       {
        if(ans&i)
        x+=i;
       }
        cout<<x<<endl;
    }
}