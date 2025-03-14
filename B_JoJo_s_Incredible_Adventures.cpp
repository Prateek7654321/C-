#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        if(s.size()==1)
        {
            if(s[0]=='1')
            cout<<1<<endl;
            else
            cout<<0<<endl;
        }else{
        int maxi=INT_MIN;
        int len=0;
        if(s[0]=='1')
        len++;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]&&s[i]=='1')
            {
                len++;
            }
            else if(s[i]=='1')
            {
                len++;
            }
            else 
            {
                maxi=max(maxi,len);
                len=0;
            }
        }
        maxi=max(len,maxi);
        // cout<<maxi<<" ";
        int a=0;
        int b=0;
        if(s[0]=='1')
        {a++;
           for(int i=1;i<s.size();i++)
           {
            if(s[i]==s[i-1])
            {
                a++;
            }
            else
            break;
           }
        }
        if(s[s.size()-1]=='1')
        {
            b++;
            for(int i=s.size()-2;i>0;i--)
            {
                if(s[i]==s[i+1])
                b++;
                else
                break;
            }
        }
        int ans=0;
        int t=1;
        int f=ceil(maxi/2);
        ans=max(ans,maxi);
        while(f--)
        {
            maxi--;t++;
            ans=max(ans,maxi*t);
        }
        int l=ceil((a+b)/2);
        int g=1;
        int p=a+b;
        ans=max(ans,p);
        while(l--)
        {
           p--;g++;
           ans=max(ans,p*g);
        }
        cout<<ans<<endl;

        }
    }
}