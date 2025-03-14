#include<bits/stdc++.h>
using namespace std;
set<int>st;
bool possible(int mid,vector<int>&positive,vector<int>&negative)
{
  int sum=0;
  while(true)
  {
    if(sum+positive[i]<=mid)
    {
        sum+=positive[i];
    }
  }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>positive;
        vector<int>negative;
        int pos=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x>0)
            {pos+=x;positive.push_back(x);}
            else
            {
                negative.push_back(x);
            }
        }
        int l=0;
        int r=pos;
        int ans=INT_MAX;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(possible(mid,positive,negative))
            {
                r=mid-1;
                ans=min(ans,mid);
            }
            else
            {
                l=mid+1;
            }
        }
        if(ans==INT_MAX)
        cout<<0<<endl;
        else
        cout<<ans<<endl;

    }
}