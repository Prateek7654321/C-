#include <bits/stdc++.h>
using namespace std;
bool checkmaximum(vector<int> v, int k)
{
    vector<int> freq(21, 0);
    for (int i = 0; i < v.size(); i++)
        freq[v[i]]++;
    for (int i = 0; i < 21; i++)
    {
        if (freq[i] > freq[k])
            return false;
    }
    return true;
}
bool checkpref(vector<int> v, int k)
{
    vector<int> freq(21, 0);
    for (int i = 0; i < v.size(); i++)
        freq[v[i]]++;
    for (int i = 0; i < v.size() - 1; i++)
    {
        freq[v[i]]--;
        bool flag = true;
        for (int i = 0; i < 21; i++)
        {
            if (i != k && freq[i] > freq[k])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            return true;
    }
    return false;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (checkmaximum(v, k))
        cout << 0 << endl;
    else
    {
        vector<int> v1 = v;
        reverse(v1.begin(), v1.end());
        if (checkpref(v, k))
            cout << 1 << endl;
        else if (checkpref(v1, k))
            cout << 1 << endl;
        else
            cout << 2 << endl;
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