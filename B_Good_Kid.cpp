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
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v[0]=v[0]+1;
        int k=1;
        for(int i=0;i<n;i++)
        {
            k*=v[i];
        }
        cout<<k<<endl;
    }
}