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
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        int maxi=INT_MIN;
        int initial=0;
        for(int i=0;i<n;i++)
        {
          maxi=max(maxi,v[i]-initial);
          initial=v[i];
        }
        maxi=max(maxi,2*(k-v[n-1]));
        cout<<maxi<<endl;
    }
}