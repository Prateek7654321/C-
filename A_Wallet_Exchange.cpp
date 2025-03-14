#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        cout<<"Bob"<<endl;
        else if(a>b)
        {
            int x=a-b;
            if(x%2==0)
            cout<<"Bob"<<endl;
            else
            cout<<"Alice"<<endl;
        }
        else
        {
            int x=b-a;
            if(x%2==0)
            cout<<"Bob"<<endl;
            else
            cout<<"Alice"<<endl;
        }
    }
}