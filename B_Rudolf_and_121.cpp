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
        int f0 = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            x == 0 ? f0++ : f0;
        }
        if (f0 > 0 && f0 < n)
        {
            cout << "NO" << endl;
            flag = true;
        }
        else
        {
            for (int i = 1; i < n-1; i++)
            { if(v[i]==0)
            {
                i+=1;continue;
            }
                if(v[i]!=0&&v[i+1]==0)
                {flag=true;cout<<"NO"<<endl;flag=true;}
            
                else
                {
                    int a=v[i]/2;
                    v[i]-=2*a;
                    v[i-1]-=a;
                    v[i+1]-=a;
                }

            }
            for(int i=0;i<n;i++)
            {
                if(v[i]!=0)
                {
                    flag=true;
                    cout<<"NO"<<endl;
                    break;
                }
            }

        }
        if (flag == false)
            cout << "YES" << endl;
    }
}