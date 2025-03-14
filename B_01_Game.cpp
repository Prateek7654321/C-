#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>st;
        int len=s.size();
        int i=0;
        int ans=0;
        while(i<s.size())
        {
            if(st.size()==0)
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                if(st.top()!=s[i])
                {
                    st.pop();
                    ans++;
                    i++;
                }
                else
                {
                    st.push(s[i]);
                    i++;
                }
            }
        }
        if(ans%2==0)
        cout<<"NET"<<endl;
        else
        cout<<"DA"<<endl;

    }
}