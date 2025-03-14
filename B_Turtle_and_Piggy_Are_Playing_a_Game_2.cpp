#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=n-1;
        while(j-i>1)
        {
        i++;j--;
        }
        cout<<v[j]<<endl;
    }
}