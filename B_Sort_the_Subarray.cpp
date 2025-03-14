#include <bits/stdc++.h>
using namespace std;
int findsubarray(vector<int> v, vector<int> v1, int index)
{
    for (int i = index; i < v1.size(); i++)
    {
        if (i == v1.size() - 1)
            return i;
        if (v1[i + 1] >= v1[i])
            continue;

        return i;
    }
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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        int index = 0;
        int len = 0;
        int maxlen = INT_MIN;
        int a = 0;
        int b = 0;
        int a1;
        int b1;
        for (int i = 0; i < n; i++)
        {
            if (i == v1.size() - 1)
                break;
            if (v[i] != v1[i])
            {
                index = i;
                a = index;
                while (a >= 0)
                {
                    if (a == 0)
                        break;
                    if (v1[a - 1] <= v1[a])
                    {
                        a--;
                    }
                    else
                        break;
                }
                int b = findsubarray(v, v1, index);
                len = b - index;
                if (maxlen < len)
                {
                    maxlen = len;
                    a1 = a;
                    b1 = b;
                }
                else
                    continue;
                i=b;
            }
            
        }
        cout << a1 + 1 << " " << b1 + 1 << endl;
    }
}