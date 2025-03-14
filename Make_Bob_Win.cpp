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
        string s;
        cin >> s;
        vector<int> zeros;
        vector<int> ones;
        int a = 0;
        int b = 0;
        if (s[0] == '0')
            a = 1;
        else
            b = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                if (a != 0)
                    a++;
                else
                    b++;
            }
            else
            {
                if (a != 0)
                {
                    zeros.push_back(a);
                    a = 0;
                    b = 1;
                }
                else
                {
                    ones.push_back(b);
                    b = 0;
                    a = 1;
                }
            }
        }
        if(a==0)
        ones.push_back(b);
        else
        zeros.push_back(a);
      if(zeros.size()==ones.size())
      cout<<1<<endl;
      else if(zeros.size()<ones.size())
      cout<<0<<endl;
      else
      {
        if(s=="0")
        cout<<1<<endl;
        else
        cout<<2<<endl;
      }
    }
}