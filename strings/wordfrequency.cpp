#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int mxcount = 0;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
        {
            count++;
            if (mxcount < count)
                mxcount = count;
        }
        else
            count = 1;
    }
    count=1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i-1])
        count++;
        else count=1;
        if(count==mxcount)
        cout<<v[i]<<" "<<"frequency is"<<mxcount<<endl;
        
    }
}