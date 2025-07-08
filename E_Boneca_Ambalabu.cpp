#include <bits/stdc++.h>
using namespace std;
void calculate(vector<int> &bitcount, int no)
{
    int x = 0;
    while (no != 0)
    {
        if (no & 1)
        {
            bitcount[x]++;
        }
        x++;
        no = no >> 1;
    }
}
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
    vector<int> bitcount(32, 0);
    for (int i = 0; i < v.size(); i++)
    {
        caclulate(bitcount, v[i]);
    }
    long long int ans=0;
    for(int i=0;i<v.size();i++)
    {
        
    }
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