#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==1)
        cout<<0<<endl;
        else if(k>=n)
        cout<<1<<endl;
        else 
        { 
          int op=1;
          while(true)  
          {
            if(k*(k-1)<n)
            { op+=k-1;
                n=n-(k*(k-1));
                if(n>1)
                op+=1;
                if(n<=k)
                {break;}
                
            }
            else
            {
                op+=n/k;
                if(n%k>1)
                op+=1;
                break;
            }
          }
          cout<<op<<endl;
        }
    }
}