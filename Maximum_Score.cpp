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
        int a = v.size();
        int k = a;
        int ans = 0;
        int t = 0;
        while (t <= k / 2 && a != 0)
        {
            bool flag = true;

            for (int i = 0; i < v.size() - 1; i++)
            {
                t++;

                if ((v[i] == 1 && v[i + 1] == 0) || (v[i] == 0 && v[i + 1] == 1))
                {
                    flag = false;
                    ans++;
                    v.erase(v.begin() + i);
                    v.erase(v.begin() + i);

                    a -= 2;

                    break;
                }
            }
            if (flag == true)
                break;
        }

        cout << ans << endl;
    }
    return 0;
}
