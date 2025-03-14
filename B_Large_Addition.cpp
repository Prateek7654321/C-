#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        string first_two = "";
       first_two+=s[0];
       first_two+=s[1];
         
        int a=stoll(first_two);
        if(n==10)
        cout<<"YES"<<endl;
        else if (a >= 11 && a <= 19)
        {   if(s[s.length()-1]-'0'!=9)
           { bool flag=false;
           for(int i=2;i<s.length()-1;i++)
           {
            if(s[i]=='0')
            {
                flag=true;break;
            }
           }
           if(flag==false)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;}
           else
           cout<<"NO"<<endl;
        }
        else
            cout << "NO" << endl;
    }
}