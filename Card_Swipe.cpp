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
        vector<int> v;
        vector<int>v1;
        vector<int>v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            v1.push_back(x);
        }
        sort(v.begin(), v.end());
        int a = 0;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                count++;
            if (v[i] != v[i - 1])
            {
                a++;
                if (count % 2 != 0)
                {
                    a++;
                    count = 1;
                    v2.push_back(i-1);
                    cout<<i-1<<" ";
                }
            }
            
        }
        return 0;
    }
}