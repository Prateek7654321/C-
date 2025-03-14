#include <iostream>
using namespace std;

int main() {
	
	  int x;
	  cin>>x;
	    string s;
	    cin>>s;
    
	    int a=0;
        int b=0;
	    for(int i=0;i<x;i++)
	    {
	        if(s[i]==0)
	        {a++;
	        cout<<a;}
            else
            b++;
	    }
	    if(a<b)
	    cout<<"gogi_to_the_moon"<<endl;
	    else
	    cout<<"kiddo"<<endl;
	    
	
	return 0;
}
