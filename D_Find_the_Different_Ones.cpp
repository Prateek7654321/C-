#include<bits/stdc++.h>
using namespace std;
#define int long long
int findindex(int a,int b,vector<int>&pref,vector<int>&v)
{ a--;b--;
  
  
  int l=a;
  int r=b;
  while(l<=r)
  {int extra=0;
  if(l>0)  
  extra=pref[l-1];
    int mid=l+(r-l)/2;
    if(v[mid]!=v[a])
    return mid;
    else if((pref[mid]-extra)/v[a]==mid-l+1)
    {l=mid+1;}
    else
    r=mid-1;
  }
  return -1;

}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;vector<int>v;
        for(int i=0;i<n;i++)
        {int x;cin>>x;v.push_back(x);}
        int m;cin>>m;
        vector<int>pref(n,0);
        pref[0]=v[0];
        for(int i=1;i<n;i++)
        pref[i]=pref[i-1]+v[i];
        for(int i=0;i<m;i++)
        {
            int a,b;cin>>a>>b;
            int index=findindex(a,b,pref,v);
            if(index==-1||index+1==a)
            cout<<-1<<" "<<-1<<endl;
            else
            cout<<a<<" "<<index+1<<endl;
        }
        cout<<endl;
    }
}