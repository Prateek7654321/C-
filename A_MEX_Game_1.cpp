#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        set<int>s;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
           int x;
           cin>>x;
           s.insert(x);
           mp[x]++;
        }
          vector<int>arr(s.begin(),s.end());
        vector<int>ans;
        bool flag=true;
        int answ=0;
        for(int i=0;i<arr.size();i++)
        { if(flag==true)
        {
           if(mp[arr[i]]==0||i!=arr[i])
           {
            
             break;
             
           }
           else
           ans.push_back(arr[i]);
           flag=false;
        }
        else
        {
          if(mp[i]==1)
          {
            
            
          break;
          }
          else
          ans.push_back(arr[i]);
          flag=true;
        }
        }
     int f=0;
            for(int i=0;i<ans.size();i++)
            if(ans[i]!=i)
            {  
                cout<<i<<endl;
                f=1;
                break;
            }
            if(f==0)
            cout<<ans.size()<<endl;
        

    }
}

