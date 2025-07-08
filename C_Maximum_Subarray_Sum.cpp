#include<bits/stdc++.h>
using namespace std;

void solve()
{
map<int,int>mp;
mp[1]++;
mp[5]++;
auto it=mp.begin();
auto its=prev(mp.end());
cout<<its->first-it->first<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    for(int i=0; i<t; i++)
        solve();
}