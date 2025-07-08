#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int>v(5);
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    if(sum/5>=7)
    cout<<0<<endl;
    else
    {int i=0;
        int ans=0;
        while(sum/5<7)
        {
            sum-=v[i];
            sum+=10;
            i++;
            ans+=100;
        }
        cout<<ans<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=0; i<t; i++)
        solve();
}