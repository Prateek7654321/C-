#include<bits/stdc++.h>
using namespace std;
void findpoint(vector<int>&v,int l,int h,int&ans,int n)
{ int index;
if(l<0||l>=v.size())
return;
  while(l<h)
  {
    int mid=l+(h-l)/2;
    if(v[mid]*(mid+1)>=n)
    {
       h=mid-1;
       index=mid;
    }
    else if(v[mid]*(mid+1)<n)
    {
        l=mid+1;
    } 
  }
  if(index<v.size())
  ans++;
  h=v.size()-1;
  findpoint(v,l,h,ans,n);
  return;
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int l=0;
    int h=v.size()-1;
    int ans=0;
    findpoint(v,l,h,ans,n);
    cout<<ans<<endl;
}