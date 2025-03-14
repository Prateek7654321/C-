#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k;
        cin>>m>>n>>k;
        int a=0;
        int b=0;
        if(k==1)
        cout<<"YES"<<endl;
        else
        {
        while(n>0&&n%2==0)
        {
        a++;n=n/2;
        }
        while(m>0&&m%2==0)
        {
        b++;m=m/2;
        }
        
        if(a==0&&b==0)
        {
            cout<<"NO"<<endl;
        }
      else  if(a==0)
        {
            if(pow(2,b)>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
       else if(b==0)
        {
           if(pow(2,a)>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl; 
        }
        else
        {
            long long int t=pow(2,a)*pow(2,b);
    
            if(t>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        }



    }
}