#include <bits/stdc++.h>
#include<string>
#include<set>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    for(int i=0;i<n-1;i++)
    {
        string s2;
         s2+=s[i];s2+=s[i+1];
        
         st.insert(s2);
         s2.erase();
    }
    int d=st.size();
    cout<<d<<endl;
    }
    return 0;
}