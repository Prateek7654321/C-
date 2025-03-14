#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int count = 1;
        char ch = s[i];
        for (int j = i + 1; j < s.length(); j++)
        {
            if (ch == s[j])
                count++;
        }
        if (max < count)
            max = count;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i+1; j < s.length(); j++)
        {
            if (ch == s[j])
                count++;
        }
        if (count == max)
            cout << ch << " " << max << endl;
    }
}