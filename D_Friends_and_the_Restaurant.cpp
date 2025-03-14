#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;vector<int>v;vector<int>v1;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);}
         for(int i=0;i<n;i++)
        {int x;cin>>x;v1.push_back(x);}
        vector<int>pos;vector<int>neg;int ans=0;
        for(int i=0;i<n;i++)
        {
           if(v[i]-v1[i]>0)
           {
            pos.push_back(v[i]-v1[i]);
           }
           else
           neg.push_back(v[i]-v1[i]);

        }
     sort(pos.begin(),pos.end());
     sort(neg.begin(),neg.end());
     map<int,int>mp;
     int l=0;
     int r=neg.size()-1; int freq=neg.size();
     while(l<pos.size()&&r>=0)
     {
        if(pos[l]+neg[r]<=0)
        {
            ans++;l++;r--;freq--;
        }
        
        else
        r--;
     }
     ans+=freq/2;
     cout<<ans<<endl;


    }
}