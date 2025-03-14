
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        vector<int> v1;
        int a = s1.size();
        int b = s2.size();
        int h = 0;
        if (a >= b)
        {
            for (int i = 0; i < b; i++)
            {
                for (int j = 0; j < a; j++)
                {
                    if (s1[j] == s2[i])
                    {
                        v1.push_back(j);
                        h++;
                        break;
                    }
                }
            }
            if (h > 0)
            {
                cout << "yes" << endl;
                for (int i : v1)
                {
                    cout << "*" << s1[i];
                     if (i == b-1)
                        cout << endl;
                    else
                    {
                        cout << "*" << endl;
                    }
                }
                
            }
            else
                cout << "no" << endl;
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    if (s1[i] == s2[j])
                        v1.push_back(j);
                    h++;
                    break;
                }
            }
            if (h > 0)
            {
                cout << "yes" << endl;
                for (int i : v1)
                {
                    cout << "*" << s2[i];
                    if (i == a-1)
                        cout << endl;
                    else
                    {
                        cout << "*" << endl;
                    }
                }
            
            }
                else cout << "no" << endl;
        }
    }
}