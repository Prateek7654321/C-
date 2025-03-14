#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long  int n, k, x;
        cin >> n >> k >> x;
        
        long long int a = 0;
       long long int b = 0;
       long long int c=n*(n+1)/2;
       if(x>c)
       cout<<"NO"<<endl;
       else{
        a=c-(n-k)*(n-k+1)/2;
        b = (k * (k + 1) / 2);
        if (x >= b && x <= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;}
    }
}