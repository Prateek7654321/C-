#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;cin>>x;
                v[i][j]=x;
            }
        }
        if(n==1&&m==1)
        cout<<-1<<endl;
        else if(m!=1)
        {
            for(int i=0;i<n;i++)
            {
                int j=0;
                int k=m-1;
                while(j<k)
                {
                    swap(v[i][j],v[i][k]);
                    j++;k--;
                }
                if(m%2!=0)
                { 
                swap(v[i][m/2],v[i][(m/2)-1]);}
            }
              
               for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
            
        }
        else{
            int j=0;
            int k=n-1;
            while(j<k)
            {
                swap(v[j][0],v[k][0]);
                j++;
                k--;
            }
            if(n%2!=0)
            {swap(v[n/2][0],v[(n/2)-1][0]);}
                     for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        }
    }
}