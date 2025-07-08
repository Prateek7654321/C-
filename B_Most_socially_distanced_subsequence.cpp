#include <bits/stdc++.h>
using namespace std;

void solve()
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
    vector<int> temp;
    int l = 0;
    while (l < v.size())
    {
        if (temp.size() < 2)
        {
            temp.push_back(v[l]);
        }
        else
        {
            int x = v[l];
            int n = temp.size() - 1;
            if (temp[n] > temp[n - 1])
            {
                if (x > temp[n])
                {
                    temp.pop_back();
                    temp.push_back(x);
                }
                else
                    temp.push_back(x);
            }
            else
            {
                if (x < temp[n])
                {
                    temp.pop_back();
                    temp.push_back(x);
                }
                else
                    temp.push_back(x);
            }
        }
        l++;
    }
    cout << temp.size() << endl;
    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
}