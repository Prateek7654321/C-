#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        int output=INT_MIN;
        if((n&1))
        {
            if(output<v[0])
            output=v[0];
        }
        for(int i=2;i<n;i++)
        {
          if(i%2==0)
          {
            if(output<v[i])
            output=v[i];
          }
        }
        cout<<output<<endl;
    }
}