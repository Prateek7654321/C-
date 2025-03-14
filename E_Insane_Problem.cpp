#include<bits/stdc++.h>
using namespace std;
#define int long long
bool possible(int k,int l1,int r1,int l2,int r2,int&ans)
{    
    int x=(long long)(k*l1);
    // cout<<x<<" ";
    if(x>r2)
    {return false;}
    if((long long)r1*k<l2)
    {return true;}
    int l=l1;int r=r1;
    int highest=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        x=(long long)(mid)*k;
        if(x<l2)
        {
            l=mid+1;
        }
        else if(x>=l2&&x<=r2)
        { highest=mid;
          l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    int lowest=-1;
    l=l1;r=r1;
    while(l<=r)
    {
         int mid=l+(r-l)/2;
        x=(long long)(mid)*k;
        if(x<l2)
        {
            l=mid+1;
        }
        else if(x>=l2&&x<=r2)
        { lowest=mid;
          r=mid-1;
        }
        else
        {
            r=mid-1;
        }
    }
    // cout<<k<<" "<<lowest<<" "<<highest<<endl;
    if(lowest!=-1&&highest!=-1)
    {
        ans+=highest-lowest+1;
    }
    return true;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        int ans=0;
        int k1=1;
        while(true)
        {
            if(possible(k1,l1,r1,l2,r2,ans))
            {
                k1=k1*k;
            }
            else
            break;
        }
        cout<<ans<<endl;
    }
}