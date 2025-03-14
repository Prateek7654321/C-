#include<bits/stdc++.h>
using namespace std;
int findanswer(string&s,string &s1,int l,int r)
{  unordered_map<char,int>mp;
    l--;r--;
  for(int i=l;i<=r;i++)
  mp[s1[i]]++;
    int freq=0;
    for(int i=l;i<=r;i++)
    {
        if(mp[s[i]]==0)
        freq++;
        else
        {
            mp[s[i]]--;
        }
    }
    return freq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;string s1;
        cin>>s>>s1;
      
        for(int i=0;i<m;i++)
        {
          int x,y;cin>>x>>y;
          int ans=findanswer(s,s1,x,y);
          cout<<ans<<endl;
        }
    }
}