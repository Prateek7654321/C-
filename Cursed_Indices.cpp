#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    { int n;
    cin>>n;
    vector<int>v;
    int a=0;
    for(int i=0;i<n;i++)
    { int x;
        cin>>x;
        a+=x;
        v.push_back(x);
    }
    if(n==1)
    {
        cout<<0<<endl;
        cout<<v[0]<<endl;
    }
    else
    {
   int out=0;
 
    sort(v.begin(),v.end());

    for(int i=n-1;i>=0;i--)
    {
        if(a-v[i]>=v[i])
        out++;
        a=a-v[i];
    }
    cout<<out<<endl;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    }
        
    }
	return 0;
}
