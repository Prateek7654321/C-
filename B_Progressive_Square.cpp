#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        vector<int>v;
        int mini=INT_MAX;
        unordered_map<int,int>mp;
        for(int i=0;i<n*n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            v.push_back(x);
            if(mini>x)
            mini=x;
        }
       
        vector<vector<int>>mat(n,vector<int>(n,0));
        mat[0][0]=mini;
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            mat[i][0]=mat[i-1][0]+c;
            if(mp[mat[i][0]]!=0)
            {
                mp[mat[i][0]]--;
             

            }
            else
            {
                flag=true;
                break;
            }

        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else{
        for(int i=0;i<n;i++)
        {
            
            for(int j=1;j<n;j++)
            {
                mat[i][j]=mat[i][j-1]+d;
                if(mp[mat[i][j]]!=0)
                {mp[mat[i][j]]--;
                }
                else
               { flag=true;
                break;}
                
            }
            if(flag==true)
            {
                
                break;
            }
        }
        if(flag==true)
        cout<<"NO"<<endl;
        }
        if(flag==false)
        cout<<"YES"<<endl;

        

    }
}