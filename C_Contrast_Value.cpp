#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        vector<int>ans;
        ans.push_back(v[0]);
        for(int i=1;i<n-1;i++)
        {
            if(v[i]<ans[ans.size()-1]&&v[i]<v[i+1])
            ans.push_back(v[i]);
            else if(v[i]>ans[ans.size()-1]&&v[i]>v[i+1])
            ans.push_back(v[i]);
        }
        if(v[n-1]!=ans[ans.size()-1])
        ans.push_back(v[n-1]);
        cout<<ans.size()<<endl;

    }
    
}