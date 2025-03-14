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
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;b.push_back(x);
        }
        int sum=0;
        int maxi=INT_MIN;
        int at=0;
       for(int i=0;i<n;i++)
       {
       sum+=max(sum,at+a[i]+(k-i)*max(maxi,b[i]));
       if(i==k)
       break;
       }
       cout<<sum<<endl;
    }
}