#include<bits/stdc++.h>
using namespace std;
#define  int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        while(k!=0)
        {
            int factor=(n/m)+1;
            int diff=(int)factor*m-n;
            if(diff>k)
            {
                cout<<n+k<<endl;
                k=0;
            }
            else
            {
               n+=diff;
               k-=diff;
               while(n%m==0)
               {
                n=n/m;
               }
               int x=m-n;
               if(k<x)
               {cout<<n+k<<endl;break;}
               else if(k==x)
               {cout<<1<<endl;break;}
               else
               {
                k-=x;n=1;
                x=m-n;
                if(k%x==0)
                {cout<<1<<endl;break;}
                else
                {
                    cout<<1+k%x<<endl;break;
                }
               }

              
            }

        }
    }
}