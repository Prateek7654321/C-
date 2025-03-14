#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int a=0;
        for(int i=2;i<=x;i++)
        {a=a+i;
        }
        int b=a%x;
        if(b==0)
        {
            cout<<x;
            for(int i=2;i<=x;i++)
            {cout<<i;}
            cout<<endl;
        }
        if(b!=0)
        {
            cout<<x-b;
            for(int i=2;i<=x;i++)
            {
                cout<<i;
            }
            cout<<endl;
        }
        
    }
    return 0;
}