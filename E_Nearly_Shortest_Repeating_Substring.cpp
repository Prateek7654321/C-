#include <bits/stdc++.h>
using namespace std;
bool checkss(string a, string s)
{
    string prev = s.substr(0, a.size());
    if (s.length() % a.length() != 0)
        return false;
    else
    {
        int i = 0;
     
        int diff = 0;
        while (i < s.size())
        {
            if (s.substr(i, a.size()) == a)
            {  
                i += a.length();
            }
            else
            {
               diff++;
                i += a.length();
            }
        }
        if (diff > 1)
            return false;
        else
            return true;
            return true;
    }
    return true;
    
};
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
        int length = -1;
        bool flag = false;
        for (int i = 0; i < s.length(); i++)
        {
            string a = s.substr(0, i + 1);
            bool flag = checkss(a, s);
            if (flag == true)
            {
                length = i + 1;break;
            }
        }
        cout << length << endl;
    }
}