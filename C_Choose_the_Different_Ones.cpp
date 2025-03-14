#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,m,k;
    cin>>n>>m>>k;
   
    set<int>s;
    set<int>s1;
    map<int,int>mp;
    map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
      
        if(x<=k)
       { s.insert(x);
       mp[x]++;}
    }
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        if(y<=k)
        {s1.insert(y);m1[y]++;}
    }
    vector<int>v(s.begin(),s.end());
    vector<int>v1(s1.begin(),s1.end());
    int common=0;
    int first=0;
    int second=0;
    map<int,int> :: iterator it=mp.begin();
    while(it!=mp.end())
    {
   if(m1[it->first]!=0)
   common++;
   it++;
    }
    // cout<<common;
    first=s.size()-common;
    second=s1.size()-common;
    // cout<<first<<second;
    if(first<=k/2)
    {
      int x=k/2-first;
      if(common>=x)
      {
        first+=x;
        common-=x;
      
      int y=k/2-second;
      if(common==y)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;}
      else
      cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;




}
}