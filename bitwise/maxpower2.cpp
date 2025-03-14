// find max power of 2 that is smaller than
#include<bits/stdc++.h>
using namespace std;
int maxtwo(int n)
{
    int a;
    while(n!=0)
    {
        a=n;
        n=n&n-1;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int x=n;
    cout<<"two power max is"<<maxtwo(n)<<endl;
    // alternate method
    // converting 0 bit after first set bit into 1 
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
    cout<<"the max power of two is"<<((n+1)>>1)<<endl;


    
}