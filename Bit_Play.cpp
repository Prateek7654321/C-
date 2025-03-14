#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    const unsigned int M = 1e9 + 7;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
       long long int ans=1;
        bool flag= true;
        for (int i = 2; i < n; i += 2)
        {  unsigned long long  out = 0;
            if (s[i - 1] == '1' && s[i - 2] == '1')
            {
                if (s[i] == '0')
                    out++;
                else
                    out += 2;
            }
            else if (s[i - 1] == '0' && s[i - 2] == '0')
            {
                if (s[i] == '0')
                    out += 3;
                else
                {
                    flag=false;
                    cout<<0<<endl;
                    break;
                }
                 
            }
            else if (s[i - 2] == '0' && s[i - 1] == '1')
            {
                if (s[i] == '0')
                    out += 1;
                else
                    out += 2;
            }
            else if(s[i-2]=='1' && s[i-1]=='0')
	        {
                if (s[i] == '0')
                    out += 1;
                else
                    out += 2;
	        }
	        ans=(ans*out)%M;
	       
        }
        if(flag==true)
        {
            cout<<ans<<endl;
        }
    }
        return 0;
    }
