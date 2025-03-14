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
        vector<int>v;bool flag=false;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        int l=1;
        int r=n;
        int i=0;int j=n-1;map<int,int>mp;
        while(i<j)
        {
         if(v[i]==l)
         {
            mp[l]=1;
            l++;i++;
         }
         else if(v[i]==r)
         {
            mp[r]=1;
            r--;
            i++;
         }
         if(v[j]==l)
         {
            mp[l]=1;
            l++;j--;
         }
        else  if(v[j]==r)
         {
            mp[r]=1;
            r--;j--;
         }
         if(i<j)
         {
            if((v[i]!=l&&v[i]!=r)&&(v[j]!=l&&v[j]!=r))
            {cout<<i+1<<" "<<j+1<<endl;flag=true;break;}
         }
        }
        if(!flag)
        {cout<<-1<<endl;}
        

    }
}