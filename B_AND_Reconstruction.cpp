#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
            int x;cin>>x;v.push_back(x);
        }
        vector<int>ans;
        ans.push_back(v[0]);
        if(n==2)
        {
            cout<<v[0]<<" "<<v[0]<<endl;
        }
        else
        {
            for(int i=0;i<v.size()-1;i++)
            {
                ans.push_back((v[i]|v[i+1]));
            }
            ans.push_back(v[v.size()-1]);
            vector<int>ver;
            for(int i=0;i<ans.size()-1;i++)
            {
                ver.push_back((ans[i]&ans[i+1]));
            }
            if(ver==v)
            {
                for(int i=0;i<ans.size();i++)
                cout<<ans[i]<<" ";
                cout<<endl;
            }
            else
            cout<<-1<<endl;
        }

    }
}