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
        if(n<=4)
        cout<<-1<<endl;
        else
        { vector<int>ans;
            for(int i=1;i<=n;i+=2)
            {
              if(i!=5)
              {
                ans.push_back(i);
              }
            }
            ans.push_back(5);
            ans.push_back(4);
            for(int i=2;i<=n;i+=2)
            {
                if(i!=4)
                ans.push_back(i);
            }
            for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
            cout<<endl;
            
        }
    }
}