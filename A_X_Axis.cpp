#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a=min(x,min(y,z));
        int b=max(x,max(y,z));
        cout<<b-a<<endl;
    }
}