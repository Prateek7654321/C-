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
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            int k = v[n - 1];
            int a = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == k)
                {
                    a += i;
                    break;
                }
            }
            cout<<a<<" "<<n-a<<endl;
            for (int i = 0; i < a; i++)
                cout << v[i] << " ";
            cout << endl;
            for (int i = a; i < n; i++)
                cout << v[i] << " ";
                cout<<endl;
        }
    }
}