#include<bits/stdc++.h>
using namespace std;
int countbits(int n)
{ int ans=0;
    while(n!=0)
    {
      ans++;
      n=n>>1;
    }
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
          mp[countbits(x)]++;
        }
        long long int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int value=it->second;
            ans+=((long long)value*(long long)(value-1))/2;
        }
        cout<<ans<<endl;
    }
}