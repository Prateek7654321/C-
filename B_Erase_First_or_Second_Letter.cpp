#include<bits/stdc++.h>
using namespace std;
int findans(int index,string s,map<string,int>&mp,vector<int>&dp,int n)
{ if(index>=n||s.size()==0)
    return 0;
if(dp[index]!=-1)
return dp[index];
string temp1=s;
string temp2=s;
int choice1=0;
temp1.erase(0,1);
if(mp.find(temp1)==mp.end())
{mp[temp1]++;
choice1=1+findans(index+1,temp1,mp,dp,n);}
else
{
choice1=findans(index+1,s,mp,dp,n);
}
int choince2=0;
if(temp2.size()>1)
{
    temp2.erase(1,1);
    if(mp.find(temp2)==mp.end())
{mp[temp2]++;
choice2=1+findans(index+1,s,mp,dp,n);}
else
{
choice2=findans(index+1,s,mp,dp,n);
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
        string s;
        cin>>s;
        vector<int>dp(n,-1);
        map<string,int>mp;
        findans(0,s,mp,dp,n);
    }
}