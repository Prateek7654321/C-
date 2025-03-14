#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { int count=0;
        int x;
        cin>>x;
        vector<int>v;
        for(int i=0;i<x;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        for(int i=1;i<=x;i++)
        if(v[i-1]==i)
        count++;
        if(count%2==0)
        {
            cout<<count/2<<endl;
        }
        else{
            cout<<(count+1)/2<<endl;
        }
        
    }
}