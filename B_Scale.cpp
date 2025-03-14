#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<vector<int>>v(n,vector<int>(n,0));
         for(int i=0;i<n;i++)
         {
            string s;cin>>s;
            for(int j=0;j<s.size();j++)
            {
             v[i][j]=s[j]-'0';
            }

         }
         int ans=n/k;
         vector<vector<int>>v1(ans,vector<int>(ans,0));
         int row=-1;
         int cols=-1;
         for(int i=0;i<v.size();i+=k)
         { 
           row++;
           cols=-1;
           for(int j=0;j<n;j+=k)
           { cols++; 
            v1[row][cols]=v[i][j];
           }
           

         }
         for(int i=0;i<v1.size();i++)
         {
            for(int j=0;j<v1[i].size();j++)
            cout<<v1[i][j];
            cout<<endl;
         }
    }
}