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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        vector<int> pref(n - 1, 0);
        vector<int> suff(n - 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            if (i == 0)
            {
                pref[i] = v[i + 1] - v[i];
            }
            else
                pref[i] = pref[i - 1] + v[i + 1] - v[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (i == n - 2)
                suff[i] = v[i + 1] - v[i];
            else
                suff[i] = v[i + 1] - v[i] + suff[i + 1];
        }
        for(int i=0;i<pref.size();i++)
        cout<<suff[i]<<" ";
     
            bool flag = false;
            int index=1;
            for (int i = 1; i <= n - 2; i++)
            {
                if (v1[i] >= suff[index])
                { cout<<"o";
                    if (v1[i - 1] >= pref[i-2 ])
                    {
                        flag = true;
                        break;
                    }
                }
                index++;
            }
            if (flag == true)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        
    }
}