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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
            sum+=x;
        }
        cout<<(sum+k-1)/k<<endl;
      
    }
}