#include<bits/stdc++.h>
using namespace std;
#define int long long
bool possible(int mid,vector<int>&nums,unordered_map<int,int>&mp,int k)
{
    bool flag=false; int cows=0;
    int j=0;
    int maxi=nums[nums.size()-1];
   
    while(j<=maxi)
    {
        if(mp[j]==1)
        {
            cows++;
            j+=mid;
        }
        else
        j++;
        if(cows>=k)
        return true;
        if((maxi-j+1)/(k-cows)<1)
        return false;
        
     
    
    }
    if(cows>=k)
    return true;
    return false;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>nums;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;nums.push_back(x);
            mp[x]=1;
        }
        sort(nums.begin(),nums.end());
        int l=0;
        int h=nums[nums.size()-1];
        int ans=INT_MIN;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(possible(mid,nums,mp,k))
            {  ans=max(ans,mid);
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        cout<<ans<<endl;

    }
}
