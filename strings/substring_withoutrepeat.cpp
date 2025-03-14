#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int n = s.length();
    string sub;
    sub = sub + s[0];
    for (int k = 0; k < n; k++)
    {
        for (int i = k; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < sub.size(); j++)
            {
                if (s[i] != sub[j])
                    flag = true;
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                sub = sub + s[i];
                cout << sub << " ";
                v.push_back(sub.length());

            }
            else
            {
                v.push_back(sub.length());

                sub.clear();

                sub = s[k];
                break;
            }
        }
    }
    sort(v.begin(), v.end());
    int k = v.size();
    cout << v[k - 1] << endl;
}