#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int sum=0;
        int count=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=m)
            {count++;
            sum=0;}

            else
            {
                sum+=v[i];
            }
        }
        if(sum!=0)
        {
            if(sum>=m)
            count++;
        }
        cout<<count<<endl;
    }
}