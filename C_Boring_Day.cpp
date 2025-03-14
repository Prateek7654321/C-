#include<bits/stdc++.h>
using namespace std;
#define int long long
void findindex(int i,int& index,vector<int>&prefix,vector<int>&v,int&ans,int&left,int& right)
{
  int l=i+1;
  int h=v.size()-1;
  while(l<=h)  
  {
    int mid=l+(h-l)/2;
    if(prefix[mid]-prefix[i]+v[i]<left)
    {
        l=mid+1;
    }
    else if(prefix[mid]-prefix[i]+v[i]>right)
    {
       h=mid-1;
    }
    else if(prefix[mid]-prefix[i]+v[i]>=left&&prefix[mid]-prefix[i]+v[i]<=right)
    {
        index=mid;
        h=mid-1;
    }
  }
  if(index!=-1)
  {ans++;}
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;cin>>n>>l>>r;
        vector<int>v;
        vector<int>prefix(n,0);
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
           
            if(i==0)
            prefix[0]=v[0];
            else
            prefix[i]=v[i]+prefix[i-1];
        }
        int i=0;int ans=0;
        while(i<n)
        {
         if(v[i]>=l&&v[i]<=r)
         {ans++;i+=1;}
         else if(v[i]>r)
         {
            i+=1;
         }
         else if(v[i]<l)
         {
            int index=-1;
            findindex(i,index,prefix,v,ans,l,r);
            if(index!=-1)
            {
                i=index+1;
            }
            else
            i++;
         }

        }
        cout<<ans<<endl;
        
       
    }
}