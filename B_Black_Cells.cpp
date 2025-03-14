#include<bits/stdc++.h>
#define int long long
using namespace std;
bool possible(vector<int>&v,int mid)
{
 int size=v.size();
 if(size%2==0)
 {
    for(int i=1;i<v.size();i+=2)
    {
        if(v[i]-v[i-1]>mid)
        return false;
    }
    return true;
 }
 else
 {
   bool flag=false;
int i=0;
while(i<v.size())
{
 if(i==v.size()-1&&flag==false)
 return true;
 else if(i==v.size()-1&&flag==true)
 return false;
 else if(abs(v[i]-v[i+1])<=mid)
 {
    i+=2;
 }
 else if(abs(v[i]-v[i+1])>mid&&flag==false)
 {
    flag=true;
    i+=1;
 }
  else if(abs(v[i]-v[i+1])>mid&&flag==true)
 {
    return false;
 }
 else
 {
    i+=2;
 }
}
return true;
 }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        int l=0;
        int h=v[n-1]-v[0];
        int ans=LLONG_MAX;
        if(n==1)
        cout<<1<<endl;
        else{
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(possible(v,mid))
            {
                if(ans>mid)
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
        }
    }
}
