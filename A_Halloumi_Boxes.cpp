#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        bool flag=true;
        int temp=-1;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            if(x<temp)
            flag=false;
            temp=x;
        }
        if(k==1&&flag==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}