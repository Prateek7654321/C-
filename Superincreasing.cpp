#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x;
	    cin>>n>>k>>x;
	    if(n==1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        int prefix[n+1];
	        if(n>3)
	       { prefix[0]=0;
	        prefix[1]=1;
	        prefix[2]=2;
	        prefix[3]=4;
	        for(int i=4;i<=n;i++)
	        prefix[i]=2*prefix[i-1]+1;
	        if(k>=3)
	        {
	        if(prefix[k]<=x)
	        cout<<"Yes"<<endl;
	        else
	        cout<<"No"<<endl;
	        }
	        else
	        {
	            if(prefix[k]<=x)
	            cout<<"YES"<<endl;
	            else
	            cout<<"No"<<endl;
	        }
	       }
	       else
	       { prefix[0]=0;
	        for(int i=1;i<=n;i++)
	        prefix[i]=i;
	        if(n==3)
	        {
	            prefix[3]=4;
	        }
	        if(k==3){
	        if(prefix[k]>x)
	        cout<<"No"<<endl;
	        else
	        cout<<"Yes"<<endl;}
	        else
	        {
	            if(prefix[k]<=x)
	            cout<<"Yes"<<endl;
	            else
	            cout<<"No"<<endl;
	            
	        }
	       }
	        
	    }
	}

}
