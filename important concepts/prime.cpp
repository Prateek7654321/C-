#include<bits/stdc++.h>
using namespace std;
bool isprime(int n,int &factors)
{ 
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
        
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int primes=2;
        if(!isprime(n,primes))
        cout<<"Number is not prime"<<endl;
        else
        cout<<"Number is prime"<<endl;

    }
}