#include<bits/stdc++.h>
using namespace std;
#define int long long 
int findhighest(int n)
{
    int ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            ans = max(ans, i);
        }
    }

    if (ans == 1)
        return n;
    return ans;
}
void calculateprime(vector<int>&v,int n)
{
    for(int i=2;i<=n;i++)
    {
     if(v[i]==0)
     {
        for(int j=i;j<=n;j++)
        {
            if(j*i<=n)
            {
                v[j*i]=1;
            }
            else
            break;
        }
     }
     else
     continue;

    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1,0);
        calculateprime(v,n);
        int x=findhighest(n);
        int ans=0;
        for(int i=2;i<=n;i++)
        { if(v[n]==0)
        {
            if(v[i]==0)
            {
                ans+=n*i;
            }
        }
        else
        {if(x*i<=n)
        ans+=n*i;
        else
        break;

        }
        }
        cout<<ans<<endl;

    }
}