#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
  int n;
  cin>>n;
  vector<int>v(n+1,0);
  for(int i=1;i<=n;i++)
  cin>>v[i];
  vector<int>pref(n+1,0);
  pref[1]=v[1];
  for(int i=2;i<=n;i++)
  pref[i]=v[i]+pref[i-1];
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
    int l,r,k;
    cin>>l>>r>>k;
    int l1=l;
    int r1=l+k-1;
    int l2=l+1;
    int r2=l+k;
    int l3=r-k+1;
    int r3=r;
    cout<<l1<<" "<<r1<<" "<<l2<<" "<<r2<<" "<<l3<<" "<<r3<<" ";
    int sum=0;
    sum+=pref[r1]-pref[l1-1];
    sum+=pref[r2]-pref[l2-1];
    if(r3>r2)
    { if(l3<r2)
    l3=r2+1;
      sum+=pref[r3]-pref[l3-1];
    }
    cout<<sum<<endl;
  }


}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    for(int i=0;i<t;i++)
    solve();

}