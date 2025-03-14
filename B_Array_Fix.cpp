#include <bits/stdc++.h>
using namespace std;
vector<int> dp[99 * 99];
bool find(int element, int &a, int &b)
{
    string f = to_string(element);
    a = f[0] - '0';
    b = f[f.size() - 1] - '0';
    for (int i = 1; i < f.size(); i++)
    {
        if (f[i] < f[i - 1])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<int>breaks(n,0);
    
        bool flag = true;

        int prev = v[0] % 10;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] >= v[i - 1])
            {  int x;int y;
                if(find(v[i-1],x,y)==true)

                prev = v[i] % 10;
            }
            else
            {
                int x, y;
                int a,b;
                if (find(v[i], x, y) == true && find(v[i - 1], a,b) == true)
                {
                    if (x >= prev||v[i]>=prev)
                    {
                        prev = y;
                        continue;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}