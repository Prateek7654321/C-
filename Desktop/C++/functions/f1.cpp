#include<iostream>
using namespace std;
int pow(int c,int d)
{ int ans =1;
for(int i=0;i<d;i++)
   {
    ans=ans*c;
   }
   return ans;

}
int main()
{ int a,b;
cin>>a>>b;
int d=pow(a,b);
    cout<<"power times number is"<<d<<endl;
}
