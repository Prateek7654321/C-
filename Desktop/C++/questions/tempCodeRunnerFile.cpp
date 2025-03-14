#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> v1;
        vector<int> v2;
        for (int i = 1; i <= x; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }

        for (int i = 1; i <= x; i++)
        {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        int max = *max_element(v2.begin(),v2.end());
       // cout<<"max:"<<max<<endl;
       for (int i = 1; i <= x; i++)
       {
        if (v2[i]==max)
        {   
        cout<<i+1<<endl;
        }
        
       }
       
        
    }
}
