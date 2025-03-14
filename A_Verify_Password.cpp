#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=-1;
        bool flag=true;
        string numbers;
        string alpha;
        if(s[0]>=97&&s[0]<=122)
        alpha+=s[0];
        else
        numbers+=s[0];
        for(int i=1;i<s.size();i++)
        { if((s[i-1]>=97&&s[i-1]<=122)&&(s[i]-'0'>=0&&s[i]-'0'<=9))
        {
            flag=false;
        }
       if((s[i]>=97&&s[i]<=122))
       alpha+=s[i];
       else
       numbers+=s[i];
        }
        if(flag==true)
        {
         string num=numbers;
         string a=alpha;
         sort(num.begin(),num.end());
         sort(a.begin(),a.end());
         if(num==numbers&&a==alpha)
         cout<<"Yes"<<endl;
         else
         cout<<"No"<<endl;
        }
        else
        cout<<"No"<<endl;
        
    }
}