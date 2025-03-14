#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n;
    // converting give no all bits into 1
    n=n|n>>1;
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
    n=n^x;
    cout<<"no after converting bits is"<<n<<endl;
}