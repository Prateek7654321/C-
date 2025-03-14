#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { vector<int>v;
    vector<int>v1;
    for(int i=0;i<4;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(x);
        v1.push_back(y);
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int x=v[3]-v[0];
    int y=v1[3]-v1[0];
    cout<<y*x<<endl;
    }
}