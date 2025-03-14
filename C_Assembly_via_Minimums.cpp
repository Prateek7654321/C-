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
        int total=n*(n-1)/2;
        for(int i=0;i<total;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        int i=0;
        n--;
        while(i<v.size())
        { 
    ans.push_back(v[i]);
    i+=n;
    n--;
        }
        ans.push_back(ans[ans.size()-1]);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;

    }
}