#include<bits/stdc++.h>
using namespace std;
#define int long long 
void compare(int &ans,int&temp)
{
    if(ans<temp)
    {
        ans=temp;
    }
}
int getindex(int f,int index,vector<pair<int,int>>v,vector<pair<int,int>>&v1)
{
if(v[f].second==v1[index].second)
return v[f-1].first;
else
return v[f].first;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v1;
        vector<pair<int,int>>v2;
        vector<pair<int,int>>v3;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v1.push_back({x,i});}
         for(int i=0;i<n;i++)
        {int x;cin>>x;v2.push_back({x,i});}
         for(int i=0;i<n;i++)
        {int x;cin>>x;v3.push_back({x,i});}
        sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());sort(v3.begin(),v3.end());
        int ans=INT_MIN;
        
        for(int i=n-1;i>n-4;i--)
        {int j=n-1;
        int k=n-1; int temp=v1[i].first;
            int index=v1[i].second;
            if(v2[j].second==index)
            {
                j--;
            }
            if(v3[k].second==index)
            {
                k--;
            }
            if(v2[j].second==v3[k].second)
            {
               temp+=max(v2[j].first+getindex(k-1,i,v3,v1),v3[k].first+getindex(j-1,i,v2,v1));
               compare(ans,temp);
            }
            else
            {temp+=v2[j].first+v3[k].first;compare(ans,temp);
           }
        }
        cout<<ans<<endl;
    }
}