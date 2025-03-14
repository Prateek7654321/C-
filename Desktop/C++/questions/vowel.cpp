#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s2 = "aeiouyAEIOUY";
    int a = s.size();
    int b = 0;
    for (int i = a - 2; i >=0; i--)
    {
        if (s[i] != ' ')
        {
            for (int j = 0; j < 12; j++)
            {
                if (s[i] == s2[j])
                {
                    b++;
                    break;
                }
            }
            if (b > 0)
                {cout << "YES" << endl;
                break;}
            else
               { cout << "NO" << endl;
               break;}
        }
        else
        continue;
    }
}