// no of flip required to convert one to other
#include<bits/stdc++.h>
using namespace std;
int setbit( int x)
{
    int a=0;
    while(x!=0)
    {
        x=x&x-1;
        a++;
    }
    return a;
}
int main()
{ int n;
int y;
cin>>n>>y;
cout<<"no of flip bit required to form same no is"<<setbit(n^y);

}