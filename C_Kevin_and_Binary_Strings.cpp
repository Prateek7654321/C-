#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = -1;
        int total = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            { k = i;
                for (int j = i; j < s.size(); j++)
                {
                   
                    if (s[j] == '0')
                        total++;
                    else
                        break;
                }
                break;
            }
        }
        
        if (total == 0)
        {
            cout << 1 << " " << s.size() << " " << 1 << " " << 1 << endl;
        }
        else
        {
            int a = k - min(total, k) + 1;
            int rem = s.size() - k;
            int b =a+rem-1;
            cout << 1 << " " << s.size() << " " << a << " " << b << endl;
        }
    }
}