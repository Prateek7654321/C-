#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if(x+1>=y&&(y%9-x%9==1))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}