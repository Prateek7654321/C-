#include <bits/stdc++.h>
using namespace std;

void solve()
{  int n;cin>>n;
    string s;
    string s1;
    cin >> s >> s1;
    int i = 0;
    int j = 0;
    vector<int> v;
    vector<int> v1;
    while (i < s.size())
    {
        if (i % 2 == 0)
            v.push_back(s[i] - '0');
        else
            v.push_back(s1[i] - '0');
        i++;
    }
    while (j < s1.size())
    {
        if (j % 2 == 0)
            v1.push_back(s1[j] - '0');
        else
            v1.push_back(s[j] - '0');
        j++;
    }
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            count++;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == 0)
            count1++;
    }
   
    if (count1 >= v1.size() / 2 && count >= (v.size() + 1) / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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