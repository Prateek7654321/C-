#include<bits/stdc++.h>
using namespace std;
int bintodecimal(string p)
{int n=p.length();
cout<<n;
int result=0;
for(int i=0;i<n;i++)
{ result+=(p[i]-'0')*(1<<n-i-1);
cout<<result<<" ";
}
return result;

}
int main()
{
    string s;
    cin>>s;
    int result=bintodecimal(s);
    cout<<"The decimal form of given binary is "<<result<<" ";
    cout<<(1<<0);
}