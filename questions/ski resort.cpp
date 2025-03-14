#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q, a;
        cin >> n >> k >> q;
        vector<int> v;
        vector<int> v2;
        vector<int> v3;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            v.push_back(d);
            if (v[i] <= q)
            {
                v2.push_back(i);
            }
        }
        int s = v2.size();
        if (s == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (s == 1)
            {
                v3.push_back(s);
            }

            else
            {
                a = 1;
                for (int i = 0; i < s; i++)

                {
                    if (i == s - 1 && v2[i] - v2[i - 1] != 1)
                        v3.push_back(1);
                    else
                    {  if(i<s-1)
                      {  if (v2[i + 1] - v2[i] == 1)
                        {
                            a++;
                        }
                        else
                        {
                            v3.push_back(a);
                            a = 1;
                        }}
                        else
                        {
                            v3.push_back(a);
                        }
                    }
                }
           
            }
                 long long    int f = 0;
            int u = v3.size();

            for (int i = 0; i < u; i++)
            {
                if (v3[i] < k)
                    continue;
                else
                {
                    for (int j = k; j <= v3[i]; j++)
                    {
                        f = f + v3[i] - j + 1;
                    }
                }
            }
            cout << f << endl;

         
        }
    }
}