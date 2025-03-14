#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int l, h = 0;
        string s;
        cin >> s;
        
        int op = 0;
        while(h<=n-1)
        {
            if(s[h]!='B')
            {
                h++;
            }
            else
            {
                op++;
                h+=k;
            }
        }
   
        cout<<op<<endl;
  
    }
}