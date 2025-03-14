#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    vector<int>v;
	    vector<int>p;
	    vector<int>ne;
	    for(int i=0;i<n;i++)
	    {
	       long long int x;
	        cin>>x;
	        v.push_back(x);
	        if(x>0)
	        p.push_back(x);
	        else
	        ne.push_back(x);
	    }
	    sort(p.begin(),p.end());
	    sort(ne.begin(),ne.end());
	    if(ne.size()==0)
	    cout<<p[0]-1<<endl;
	    else if(p.size()==0)
	    {
	     int a=ne.size();
	     cout<<-1*(ne[a-1]+1);
	    }
	    else
	    {
	       int a=ne.size();
	       int b=ne[a-1];
	       int c=p[0];
	       if(-1*b>c)
	       cout<<c-1<<endl;
	       else
	       cout<<-1*(b)+1<<endl;
	       
	    }
	
	}
	return 0;
}
