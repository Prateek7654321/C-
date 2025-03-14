// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,k;
//         cin>>n>>k;
// 		string s;
// 		cin>>s;
// 		set<char>a;
// 		if(n<k)
// 		cout<< -1<<endl;
// 		else
// 		{for(int i=0;i<n;i++)
// 		{
// 			a.insert(s[i]);
// 		}
// 		int p=a.size();
// 		if(p>=k)
// 		cout<<0<<endl;
//        else
// 	   {
// 		cout<<k-p<<endl;
// 	   }
// 		}
// 	}
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int x;
    int k;
	cin>>n>>x;
    if(x%n==0)
    k=x/n;
   else
   k=x/n+1;
	int b=97+k-1;
	cout<<char(b)<<endl;
}