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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        stack<int> st1;
        stack<int> st2;
        int i = 0;
        int j = 0;
        int ans = 0;
        while (i < v.size())
        {
            if (st1.size() == 0)
            {
                st1.push(v[i]);
            }
            else if (v[i] == st1.top())
            {
                st1.push(v[i]);
            }
            else if (st2.size()&&v[i] == st2.top())
            {
                st2.push(v[i]);
            }
            else if (st2.size() == 0)
                st2.push(v[i]);
            else
            {
                if (st1.top() >= st2.top())
                {
                    if (v[i] <= st2.top())
                        st2.push(v[i]);
                    else if (v[i] <= st1.top())
                        st1.push(v[i]);
                    else
                    {
                        ans++;
                        st2.push(v[i]);
                    }
                }
                else
                {
                    if (v[i] <= st1.top())
                        st1.push(v[i]);
                    else if (v[i] <= st2.top())
                        st2.push(v[i]);
                    else
                    {
                        ans++;
                        st1.push(v[i]);
                    }
                }
            }
            i++;
        }
        cout << ans << endl;
    }
}