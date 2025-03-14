#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
       vector<vector<int>> v(m, vector<int>(n,0));
        vector<vector<int>> v1(m, vector<int>(n,0));
          for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                char value;
                cin>>value;
                v[i][j]=value-'0';
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                  char value;
                cin>>value;
                v1[i][j]=value-'0';
            }
        }
        bool flag=true;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {  
               
                if(v[i][j]!=v1[i][j])
                { if(j==n-1||i==m-1)
                { 
                    flag=false;break;
                }
                    if((v[i][j]+2)%3==v1[i][j])
                    {
                        v[i][j]=(v[i][j]+2)%3;
                        v[i+1][j+1]=(v[i+1][j+1]+2)%3;
                        v[i][j+1]=(v[i][j+1]+1)%3;
                        v[i+1][j]=(v[i+1][j]+1)%3;

                    }
                    else
                    {
                         v[i][j]=(v[i][j]+1)%3;
                        v[i+1][j+1]=(v[i+1][j+1]+1)%3;
                        v[i][j+1]=(v[i][j+1]+2)%3;
                        v[i+1][j]=(v[i+1][j]+2)%3;
                    }
                }
            }
            if(flag==false)
            break;
        }
          
        if(flag==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
}