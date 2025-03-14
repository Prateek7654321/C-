#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n>>x;
        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        if (sum%n==0&&sum/n==x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}