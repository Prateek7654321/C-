#include<bits/stdc++.h>
using namespace std;
#define int long long
void findans(vector<int>&v,int& ans)
{
   while(v.size()>1)
   {
    reverse(v.begin(),v.end());
    vector<int>temp;
    int ans1=0;
    for(int i=1;i<v.size();i++)
    {
        temp.push_back(v[i]-v[i-1]);
        ans1+=v[i]-v[i-1];
    }
    ans=max(ans,ans1);
   
    v=temp;
   }
   ans=max(ans,v[0]);
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
        int ans=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            ans+=x;
            if(x<0)
            flag=true;

        }
        if(flag)
        findans(v,ans);
        cout<<ans<<endl;
    }
}