#include <bits/stdc++.h>
using namespace std;
int findlast(int n)
{ int ans=INT_MIN;
    int a=0;
    while(n!=0)
    {
      if((n&1)==1)
      ans=max(ans,a);
      a++;
      n=n>>1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n1=n;
        int x=findlast(n);
        int f=0;
        while(f<x)
        {
            n=(n|(1<<f));
            f++;
        }
        n=(n^(1<<x));
        int el=(n^n1);
        if(el+n>n1&&el+n1>n&&n1+n>el)
        cout<<n<<endl;
        else
        cout<<-1<<endl;
        
        
    }
}