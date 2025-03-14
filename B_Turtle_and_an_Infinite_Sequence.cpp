#include<bits/stdc++.h>
using namespace std;
#define int long long
 int ooor(int a1,  int b1){
    if (a1==b1)
        return a1;
    else{
    unsigned f = 0;//will help in calculating logn timee
    unsigned r = 0;
    while(b1){
        f*=2;
        if (a1%2==1 || a1 != b1)
            f++;
        a1/=2;
        b1/=2;
    }
    while(f){
        r *= 2;
        r += f % 2;
        f/=2;
    }
    return r;
    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
            int ans=0;
            int a=n-m;
            if(a<0)
            a=0;
            
            ans=ooor(a,n+m);
            cout<<ans<<endl;
            
       
    }
}