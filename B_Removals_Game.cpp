#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;vector<int>v1;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
         for(int i=0;i<n;i++)
        {
            int y;cin>>y;v1.push_back(y);
        }
        if(v==v1)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            reverse(v1.begin(),v1.end());
            if(v1==v)
            cout<<"Bob"<<endl;
            else
            cout<<"Alice"<<endl;
        }
    }
}