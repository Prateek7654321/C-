#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n>>m;
     string s;
     cin>>s;
     vector<int>v;
     map<int,int>mp;
     for(int i=0;i<m;i++)
     {
        int x;cin>>x;
        v.push_back(x);
        mp[x]++;
     }
     set<int>st;
       for(int i=0;i<m;i++)
     {
       st.insert(v[i]);
     }
     vector<int>v3(st.begin(),st.end());

     string s1;
     cin>>s1;
     sort(s1.begin(),s1.end());
     sort(v.begin(),v.end());
    for(int i=0;i<v3.size();i++)
    {
      s[v3[i]-1]=s1[i];
    }
    cout<<s<<endl;
    }
}