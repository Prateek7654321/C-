#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(k%2!=0)
        {cout<<"No"<<endl;}
        else
        {
            int x=0;
            int j=n;
            for(int i=1;i<=n;i++)
            {
                x+=abs(i-j);
                j--;
            }
            if(k>x)
            cout<<"No"<<endl;
            else
            { cout<<"Yes"<<endl;
                map<int,int>mp;
                 j=n;
                for(int i=1;i<=n;i++)
                {
                    if(mp[i]!=0)
                    cout<<mp[i]<<" ";
                    else
                    {
                        if(k==0)
                        cout<<i<<" ";
                        else
                       { while((j-i)>k/2)
                        {
                            j--;
                        }
                        k=k-2*abs(i-j);
                        cout<<j<<" ";
                        mp[j]=i;
                        j--;
                       }
                    }
                   
                }
                cout<<endl;
            }
        }
    }
}