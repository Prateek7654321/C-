#include<bits/stdc++.h>
using namespace std;
#define int long long
int findanswer(vector<int>&v,int target,vector<int>&pref)
{
  int l=0;
  int r=v.size()-1;
  int ans=-1;
  while(l<=r)
  {
    int mid=l+(r-l)/2;
    if(v[mid]<=target)
    { ans=max(ans,mid);
        l=mid+1;
    }
    else
    {
        r=mid-1;
    }
  }
  if(ans==-1)
  return 0;
  return pref[ans];
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        vector<int>pref(n,0);
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            if(i==0)
            {pref[i]=v[i];}
            else
            {
                pref[i]=v[i]+pref[i-1];
            }
        }
        vector<int>q;
        for(int i=0;i<k;i++)
        {
            int x;cin>>x;q.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
               v[i]=max(v[i],v[i-1]);
            }
        }
        vector<int>answer;
        for(int i=0;i<k;i++)
        {
        answer.push_back(findanswer(v,q[i],pref));
        }
        for(int i=0;i<answer.size();i++)
        cout<<answer[i]<<" ";
        cout<<endl;


    }
}