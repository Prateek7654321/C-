#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{ 
		vector<int>v1;
	int b=0;
	int h=0;
	int u=0;
	    int t,k,l,m,a;
	    cin>>t>>k>>l;
	    for(int i=0;i<t;i++)
	    {
	     cin>>m>>a;
	     if(a==l)
	     {
	         v1.push_back(m);
	         b++;
	         
	     }
	    }
	    if(b==0)
	    {
	        cout<<-1<<endl;
	        
	    }
	    else
	    {
	        sort(v1.begin(), v1.end());
	        int d=v1.size();
	        if(d>=k)
	        {for(int i=d-1;i>=d-k;i--)
	        {
	            h=h+v1[i];
				
	        }
	             cout<<h<<endl;
	        }
	       
	        else{
	            cout<<-1<<endl;
	            break;
	        }
	       
	    }
	   
	}
	return 0;
}
