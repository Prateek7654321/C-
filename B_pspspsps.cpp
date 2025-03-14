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
        int pt = 0;
        int st = 0;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'p')
                pt++;
            else if(s[i]=='s')
                st++;
            if (pt > 0 && s[i] == 's')
            {
                flag = true;
                false;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else if (s[0] == '.' && s[n - 1] == '.'&&(st!=0&&pt!=0))
        {
            cout << "NO" ;
        }
        else if (st == 0 || pt == 0 || (pt == 1 && st >= 0) || (st == 1 && pt > 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}