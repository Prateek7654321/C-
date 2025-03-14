#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0;
        if (n == 1)
            cout << 1 << endl;
        else
        {
           int a=0;
           int b=0;
           int ans=1;
           for(int i=0;i<n;i++)
           {
            if(s[i]=='+')
            a++;
            else
            b++;
            
           }
           cout<<abs(a-b)<<endl;
        }
    }
}