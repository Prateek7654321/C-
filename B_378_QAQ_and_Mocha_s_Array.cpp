#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        int total =0;
        int a=v[0];
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
           if(v[i]%a!=0)
           {
            v1.push_back(v[i]);
           }  
        }
        if(v1.size()==0)
        cout<<"Yes"<<endl;
        else
        {
            bool flag=false;
            for(int i=0;i<v1.size();i++)
            {
                if(v1[i]%v1[0]!=0)
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
      
    }
}