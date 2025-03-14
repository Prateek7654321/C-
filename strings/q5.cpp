// lexicographically maximum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int n=v.size();
    cout<<v[n-1]<<endl;
}