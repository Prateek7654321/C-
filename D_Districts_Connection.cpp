#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        int value=-1;
        int ans=INT_MAX;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
         if(ans>it->second)
         {
            ans=it->second;
            value=it->first;
         }
        }
      
        vector<int>indexes;
        for(int i=0;i<n;i++)
        {
            if(v[i]==value)
            indexes.push_back(i);
        }
        int l=0;
        int h=1;
        if(mp.size()==1)
        cout<<"NO"<<endl;
        else
        { bool flag=false;
            vector<pair<int,int>>ans;
            for(int i=0;i<n;i++)
            {
                if(v[i]!=value)
                {
                    ans.push_back({indexes[l]+1,i+1});
                    if(h<indexes.size())
                    {
                        ans.push_back({indexes[h]+1,i+1});
                        h++;
                    }
                }
            }
            cout<<"YES"<<endl;
            for(int i=0;i<ans.size();i++)
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }

        
       
    }
}