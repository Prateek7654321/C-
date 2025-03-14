#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int n;
        int m;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        cin>>m;
        vector<int>v1;
        for(int i=0;i<m;i++)
        {
            int k;
            cin>>k;
            v1.push_back(k);
        }
        map<int,int>mp;
        int x=1;
        for(int i=0;i<n;i++)
        {
         mp[v[i]]=x;
         x++;
        }
        long long int a=0;
       long long  int b=0;
        for(int i=0;i<m;i++)
        {
            a+=mp[v1[i]];
            b+=n-mp[v1[i]]+1;

        }
        cout<<a<<" "<<b<<endl;
        
    
}