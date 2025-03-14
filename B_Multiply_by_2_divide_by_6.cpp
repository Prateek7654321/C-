#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0;
        int y=0;
        while(n%2==0)
        {
            n=n/2;
            x++;
        }
        while(n%3==0)
        {
            n=n/3;
            y++;
        }
       
        if(n!=1)
        cout<<-1<<endl;
        else
        {
            if(x>y)
            cout<<-1<<endl;
            else
            {
                cout<<y+y-x<<endl;
            }

        }


    }
}