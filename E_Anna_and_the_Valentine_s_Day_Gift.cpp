#include <bits/stdc++.h>
using namespace std;
int findzeroes(int x, int &total)
{
    int zeros = 0;
    string s = to_string(x);
    total += s.size();
    while (x % 10 == 0)
    {
        zeros++;
        x /= 10;
    }
    return zeros;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(findzeroes(x, total));
        }
        sort(v.begin(), v.end());
        for (int j = v.size() - 1; j >= 0; j -= 2)
        {
            total -= v[j];
        }
        if (total >= m + 1)
            cout << "Sasha" << endl;
        else
            cout << "Anna" << endl;
    }
}