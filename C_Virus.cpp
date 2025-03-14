#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        vector<int> diff;
        for (int i = 1; i < k; i++)
        {
            diff.push_back(v[i] - v[i - 1] - 1);
        }
        sort(diff.begin(), diff.end());
        int x = n - v[k - 1] + v[0] - 1;
        int time = 0;
        int safe = 0;
        
        if (diff.size()!=0&&x > diff[diff.size() - 1])
        {
            time += 4;
            if(x!=1)
            safe += x - 1;
            else
            safe+=x;
        }
        else
        {
            diff.push_back(x);
            sort(diff.begin(), diff.end());
        }

        for (int i = diff.size() - 1; i >= 0; i--)
        {
            diff[i] = diff[i] - time ;
            if (diff[i] ==1)
            safe+=diff[i];
            else  
            {
                diff[i]-=1;
                if(diff[i]>0)
                safe+=diff[i];
            }
              
            time += 4;
        }

        cout << n - safe << endl;
    }
}