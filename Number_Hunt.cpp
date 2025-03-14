#include <bits/stdc++.h>
using namespace std;
// jaishreeram
bool isprime(int n)
{
    bool flag=true;
    bool flags=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {flag=false;}
        if(i*i==n)
        {flags=false;}

    }
    return (flag&flags);
}
int solve (int n)
{
vector<int>v;
while(v.size()<2)
{
    if(isprime(n))
    {v.push_back(n);}
    n++;
}
return v[0]*v[1];

}

int main()
{
    

    int h;
    cin >> h;

    while (h--)
    {
        int n;
        cin >> n;
        int f = n + 1;
        if (n == 1)
            cout << 6 << endl;
        else
        {
           cout<<solve(n)<<endl;
        }

        
    }
    return 0;
}
