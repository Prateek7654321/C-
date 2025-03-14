#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        map<int, int> mp1;
        map<int, int> mp2;
        set<int>s3;
        set<int>s4;
        int first = 0;
        int second = 0;
        for (int i = 0; i <n; i++)
        {
            mp1[v[i]]++;
            s3.insert(v[i]);
           
        }
        for (int i = n; i < 2 * n; i++)
        {
            mp2[v[i]]++;
            s4.insert(v[i]);
            
        }
        vector<int>v1;
        vector<int>v2;
        vector<int> v3(s3.begin(), s3.end());
         vector<int> v4(s4.begin(), s4.end());
             for (int i = 0; i < v3.size(); i++)
            {
                if (mp1[v3[i]] == 2)
                    {v1.push_back(v3[i]);
                v1.push_back(v3[i]);}
                if (v1.size() == 2 * k)
                    break;
            }
            for (int i = 0; i < v4.size(); i++)
            {
                if (mp2[v4[i]] == 2)
                    {v2.push_back(v4[i]);
                v2.push_back(v4[i]);}
                if (v2.size() == 2 * k)
                    break;
            }
      
      
       
        if (v1.size() != 2 * k)
        {
         for (int i = 0; i < v3.size(); i++)
        {
            if (mp1[v3[i]] == 1)
            {
                v1.push_back(v3[i]);
                v2.push_back(v3[i]);
            }
            if (v1.size() == 2 * k)
                break;
        }
        }
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << endl;
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";
        cout << endl;
    }
}