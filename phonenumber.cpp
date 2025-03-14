#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";
    string s;
    cin >> s;
    vector<string> v;
    int a = s[0] - '0';
    string b = mp[a];
    for (int k = 0; k < b.size(); k++)
    {
        string singleChar(1, b[k]); // Convert character to string
        v.push_back(singleChar);
    }
    if (s.size() > 1)
    { for(int i=1;i<s.size();i++)
    {
        int f=s[i]-'0';
        string st=mp[f];
        
    }
    }
}