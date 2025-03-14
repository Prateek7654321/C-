#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=0;
        int orig=n;
        vector<int>ans;
        ans.push_back(n);
        while(orig!=0)
        { 
          if((n&(1LL<<k))!=0)
          { 
            ans.push_back((n^(1LL<<k)));
            k++;
          }
          else
          k++;
          orig=(orig>>1LL);
          if(orig<0)
          break;
          
          
        }
       
        vector<int>another;
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]!=0)
            {
                another.push_back(ans[i]);
            }
        }
         cout<<another.size()<<endl;
        
            for(int i=0;i<another.size();i++)
        {
           cout<<another[i]<<" ";
        }
        cout<<endl;
    
    }
}