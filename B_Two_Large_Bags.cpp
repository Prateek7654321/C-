#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            mp[x]++;
        }
        sort(v.begin(),v.end());
        for(int i=v[0];i<=v[n-1];i++)
        {
            if(mp[i]>2)
            {  
                mp[i+1]=mp[i+1]+mp[i]-2;
                mp[i]=2;
            }
        }
        bool flag=false;
        for(int i=v[0];i<=v[n-1]+1;i++)
        {
            if(mp[i]%2!=0)
            {
               flag=true;break;
            }
        }
        if(flag)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;

    }
}