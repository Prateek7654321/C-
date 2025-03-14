#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        int maxi=INT_MIN;
        int givensum=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        givensum+=v[0];maxi=max(maxi,givensum);
        if(givensum<0)
        givensum=0;
        for(int i=1;i<n;i++)
        {
            if((v[i]%2==0&&v[i-1]%2!=0)||(v[i]%2!=0&&v[i-1]%2==0))
            {
                givensum+=v[i];
                maxi=max(maxi,givensum);
                if(givensum<0)
                givensum=0;
               
            }
            else
            {
                givensum=v[i];
                maxi=max(maxi,givensum);
                if(givensum<0)
                givensum=0;
            }
        }
        cout<<maxi<<endl;
    }
}