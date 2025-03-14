#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    string t;
	    string u;
	    string r;
	    cin>>s>>t>>u;
	    int a=s[0];
	    int b=t[0];
	    int z=b-a;
	    for(int i=0;i<n;i++)
	    {
	       int f=int (u[i])+z;
	        if(f>122)
	    f=f-122+96;
	  
	  
	    r=r+char(f);
	    }
	    cout<<r<<endl;
	    
	}
	return 0;
}
