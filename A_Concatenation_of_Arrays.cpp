#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int a,b;cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<" ";
        cout<<endl;
    }
    
}