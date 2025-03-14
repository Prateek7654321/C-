#include <bits/stdc++.h>
using namespace std;
int x;
int y;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int a = s1.size();
    int b = s2.size();
    int d = 0;
    int c = 0;
    if (a == b)
    {
        for (int i = 0; i < a; i++)
        {
            x = s1[i];
            y = s2[i];
            if (x > 97)
            {
                c++;
            }
            if (x < 97)
            {
                x = x + 32;
                s1[i] = x;
            }
            if (y > 97)
            {
                c++;
            }
            if (y < 97)
            {
                y = y + 32;
                s2[i] = y;
            }
        }}
        if (a > b)
        {
            cout << 1 << endl;
        }
        if (a < b)
        {
            cout << -1 << endl;
        }
        for (int i = 0; i < a; i++)
        {
            int h = s1[i];
            int k = s2[i];
            if (h == k)
                d++;
            if (h < k)
            {
                cout << -1 << endl;
                break;
            }
            if (h > k)
            {
                cout << 1 << endl;
                break;
            }
        }
        if (d == b)
            cout << 0 << endl;
    }