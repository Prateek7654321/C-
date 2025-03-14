#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	        
	    }
	    int total=0;
	    m[v[n-1]]++;
	    for(int i=n-2;i>=0;i--)
	    {  
	        int x=v[i]-3;
	        if(x<=0)
            {
	        m[v[i]]++;continue;}

	        else
	        {
	            if(v[i]%x==0)
	            {
	                if(m[v[i]/x]!=0)
	                total+=m[v[i]/x];
	            }
	            else
	            continue;
	        }
              m[v[i]]++;
	    }
	    cout<<total<<endl;
	    
	}

}
