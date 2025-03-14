#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {   
        int x;
        cin>>x;
        cin.ignore();  
        string s;
        getline(cin,s);
        string s2;
         s2=s2+s[0];
        int b=s.size();
        int y=0;
        int h=0;
            for(int i=1;i<b-1;i+=3)
            {y++;
                if(s[i]==s[i+2])
                { h++;
                    char d=s[i];
                    s2=s2+d;
                }
                else
                {
                    s2=s2+s[i]+s[i+2];
                }
            }
            if(y==h)
            {
                cout<<s2+s[b-1]+s[b-1]<<endl;
            }
            else
            {
                cout<<s2+s[b-1]<<endl;
            }
        
    
}
}