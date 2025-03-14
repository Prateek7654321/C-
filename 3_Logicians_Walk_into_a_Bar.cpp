#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        bool flag = false;
        if (n == 1)
        {
            if (s[0] == '1')
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int x = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '0')
                {
                    x += i;
                    flag = true;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
               
                if (flag == false)
                {
                    if (i == n - 1)
                       {
                        if(s[i]=='0')
                        cout<<"NO"<<endl;
                        else
                        cout<<"YES"<<endl;
                       }
                    else
                        cout << "IDK" << endl;
                }
                else
                {
                    if (i >= x)
                        cout << "NO" << endl;
                    else
                    {
                        if (s[i] == '1')
                            cout << "IDK" << endl;
                        else
                            cout << "NO" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
