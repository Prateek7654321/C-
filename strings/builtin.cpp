#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcd";
    cout<<s.length()<<" "<<s<<endl;
    // to find length of string
    s.push_back('e');
    cout<<s<<endl;
    // reverse string from ondex 1 to 3
    reverse(s.begin()+1,s.begin()+4);
    cout<<s<<endl;
    // substring from given index
    cout<<s.substr(1,3);

}