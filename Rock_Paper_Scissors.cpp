#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int a=x/2+1;
        int t = 0;
        string r;
        for(int i=0;i<s.size();i++)
        {
            r+='P';
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R'&&r[i]=='P')
            {
                
                t++;
            }
            
        }
        
        if (t >= a)
        {
            
            cout << r << endl;
        }
        else
        {
            int f = a - t;
            int h = 0;
            int i;
            
            for (i = s.size() - 1; i >= 0; i--)
            { if(s[i]=='R'&& r[i]=='P')
            {
                continue;
            }
                if (s[i] == 'P')
                {
                    r[i] = 'S';
                    h++;
                } 
                else if(s[i]=='S')
                  {  r[i] = 'R';h++;}
               
                if (h == f)
                    break;
            }
           
            cout << r << endl;
        }
    }
}