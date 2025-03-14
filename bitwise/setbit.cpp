#include<bits/stdc++.h>
using namespace std;
int countset(int n)
{int a=0;
    while(n!=0)
    {
        n=n&n-1;
a++;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<<"no of set bits are"<< __builtin_popcount(n)<<endl;
    cout<<"no of setbits by brians algo is"<<countset(n);
}