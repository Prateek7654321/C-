#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    vector<string>v;
    string temp;
    stringstream ss(str);
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int n=v.size();
    string s=v[0];
    string e=v[n-1];
    int st=s.size();
    int en=e.size();
    int m=min(st,en);
    int count=0;
    for(int i=0;i<m;i++)
    {
        if(s[i]==e[i])
        count++;
        else
         break;
    }
    if(count==0)
    cout<<" "<<endl;
    else
    {
        for(int i=0;i<count;i++)
        cout<<s[i];
        cout<<endl;
    }


}