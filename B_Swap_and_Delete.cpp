#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> one;
        vector<int> zero;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero.push_back(i);
            else
                one.push_back(i);
        }
        if (zero.size() == 0 || one.size() == 0)
        {
            cout << s.size() << endl;
        }
        else
        {
            int i = 0;
            int j = 0;
            int k = 0;
            int t;
            string copy = s;
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == copy[i])
                {
                    if (s[i] == '0')
                    {
                        if (j < one.size())
                        {
                            swap(copy[i], copy[one[j]]);
                            j++;
                            k++;
                        }
                        else
                        {
                            t = i;
                            break;
                        }
                    }
                    else
                    {
                        if (s[i] == '1')
                        {
                            if (k < zero.size())
                            {
                                swap(copy[i], copy[zero[k]]);
                                j++;
                                k++;
                            }
                            else
                            {
                                t = i;
                                break;
                            }
                        }
                    }
                }
                else
                {
                    continue;
                }
            }
            if(i>=s.size())
            cout<<0<<endl;
            else
            cout<<s.size()-t<<endl;
        }
    }
}