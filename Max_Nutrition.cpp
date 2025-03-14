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
        vector<int> v1;
        vector<int> v2;
        set<int> s1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            s1.insert(x);
        }
        for (int j = 0; j < n; j++)
        {
            int y;
            cin >> y;
            v2.push_back(y);
        }
        int out = 0;
        for (auto i : s1)
        {
            int outp = INT_MIN;
            for (int j = 0; j < n; j++)
            {
                if (v1[j] == i)
                {
                    if (outp < v2[j])
                    {
                        outp = v2[j];
                    }
                }
            }
            if (outp > 0)
            {
                out += outp;
            }
            outp = 0;
        }
        cout << out << endl;
    }
    return 0;
}

