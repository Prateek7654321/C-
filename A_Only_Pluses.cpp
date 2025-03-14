#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        for(int i=0;i<3;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        int t=1;
        while(t<=5)
        {
         v[0]+=1;
         sort(v.begin(),v.end());
         t++;
        }
        cout<<v[0]*v[1]*v[2]<<endl;
    }
}