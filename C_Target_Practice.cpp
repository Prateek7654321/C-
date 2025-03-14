#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {int out = 0;

        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            
            for (int j = 0; j < 10; j++)
            {
                if (i == 0 || i == 9)
                {
                    if (s[j] == 'X')
                    {
                        
                        out ++;
                        
                    }
                }
                else if (i == 1 || i == 8)
                {
                    if (s[j] == 'X')
                    {
                        if (j >= 1 && j <= 8)
                        {
                            out += 2;
                        }
                        if (j == 0 || j == 9)
                        {
                            out += 1;
                        }
                    }
                }
                else if (i == 2 || i == 7)
                {
                    if (s[j] == 'X')
                    {
                        if (j >= 2 && j <= 7)
                            out += 3;
                    
                    if (j == 0 || j == 9)
                    {
                        out += 1;
                    }
                    if (j == 1 || j == 8)
                        out += 2;
                        }
                }
                else if (i == 3 || i == 6)
                {  if(s[j]=='X')
                {
                    if (j >= 3 && j <= 6)
                        out += 4;
                    if (j == 0 || j == 9)
                    {
                        out += 1;
                    }
                    if (j == 1 || j == 8)
                        out += 2;
                    if (j == 2 || j == 7)
                        out += 3;
                }
                }
                else if (i == 4 || i == 5)
                { if(s[j]=='X')
                {
                    if (j >= 4 && j <= 5)
                    {
                        out += 5;
                    }
                    if (j == 0 || j == 9)
                    {
                        out += 1;
                    }
                    if (j == 1 || j == 8)
                        out += 2;
                    if (j == 2 || j == 7)
                        out += 3;
                    if (j == 3 || j == 6)
                        out += 4;
                }
                }
            }
        }
        cout << out << endl;
    }
}