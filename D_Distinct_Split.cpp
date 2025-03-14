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
        string s;
        cin >> s;
        vector<int> right(s.size(), 0);
        vector<int> left(s.size(), 0);
        set<char> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            st.insert(s[i]);
            right[i] = st.size();
        }
        set<char> sts;
        for (int i = 0; i < s.size(); i++)
        {
            sts.insert(s[i]);
            left[i] = sts.size();
        }
        int max = INT_MIN;
        if (s.size() == 1)
            cout << 1 << endl;
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i == 0)
                {
                    int x = left[i] + right[i + 1];
                    if (max < x)
                        max = x;
                }
                else if (i == s.size() - 1)
                {
                    int x = right[i] + left[i - 1];
                    if (max < x)
                        max = x;
                }
                else
                {
                    int x = left[i] + right[i + 1];
                    if (max < x)
                        max = x;
                }
            }
            cout << max << endl;
        }
    }
}