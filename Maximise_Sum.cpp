#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);}
        sort(v.begin(),v.end());int sum=0;int mn=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
           sum+=abs(v[i]);
           mn=min(mn,abs(v[i]));
        }
        sum-=2*mn;
        cout<<sum<<endl;
       

    }
}