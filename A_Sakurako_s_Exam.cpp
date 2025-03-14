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
       
        b=b%2;
        if(a>2)
        {
            a=2+(a-2)%2;
        }
         if(a%2==0&&b%2==0)
        cout<<"YES"<<endl;
        else if(a==0||b==0)
        cout<<"NO"<<endl;
        else if(b*2==a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}