#include<bits/stdc++.h>
using namespace std;
void calculatepf(int no,map<int,int>&mp)
{
    
        for(int j=2;j*j<=no;j++)
        {
            while(no%j==0)
            {
                no=no/j;
                mp[j]++;
            }
            if(no==1)
            break;
        }
        if(no>1)
        mp[no]++;

    
}
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
            int x;cin>>x;v.push_back(x);
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            calculatepf(v[i],mp);
        }
        bool flag=true;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%n!=0)
            {
                flag=false;break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}