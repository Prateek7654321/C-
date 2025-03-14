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
       
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v[0]!=v[n-1])
        {
          int a=0;
          int b=0;
          for(int i=1;i<n;i++)
          {
            if(v[i]==v[0])
            {
                a++;
            }
            else
            break;
          }
          for(int j=n-2;j>=0;j--)
          {
            if(v[j]==v[n-1])
            b++;
            else
            break;
          }
          if(a==0&&b==0)
          cout<<n-1<<endl;
          else 
          {
            int x=max(a,b);
            cout<<n-x-1<<endl;
          }

        }
        else
        {
        
int a=0;
          int b=n-1;
          for(int i=1;i<n;i++)
          {
            if(v[i]==v[0])
            {
                a=i;
            }
            else
            break;
          }
          for(int j=n-2;j>=0;j--)
          {
            if(v[j]==v[n-1])
            b=j;
            else
            break;
          }
        if(a==n-1&&b==0)
        cout<<0<<endl;
      else
      {
        cout<<b-a-1<<endl;
      }


        }
    }
}