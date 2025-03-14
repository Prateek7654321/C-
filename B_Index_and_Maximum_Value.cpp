#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        int maxi=INT_MIN;
        priority_queue<int>pq;

        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            pq.push(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++)
        { char x;int a;int b;cin>>x;cin>>a;cin>>b;
        if(v[n-1]>=a&&v[n-1]<=b)
        {
            if(x=='+')
            v[n-1]=v[n-1]+1;
            else
            v[n-1]=v[n-1]-1;
        }
        cout<<v[n-1]<<" ";
           }
           cout<<endl;
        

      
    }
    
}