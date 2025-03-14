#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        
        multiset<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            
            
        }
        for(int i=0;i<n;i++)
        mp[v[i]]=i;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int y;
            cin>>y;
            v1.push_back(y);
        }
        int arr[n]={0};
        sort(v1.begin(),v1.end());
        map<int,int>:: iterator it =mp.begin();
        while(it!=mp.end())
        {
            cout<<it->second<<" ";
            it++;

        }
        cout<<endl;
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
  cout<<endl;

    }
}