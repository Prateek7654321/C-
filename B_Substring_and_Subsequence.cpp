#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    string s1;
    cin >> s >> s1;
    int ans = 0;
    ans += s.size();
    int indlen=0;
   
    int len=INT_MIN;
    for (int i = 0; i < s1.size(); i++)
    { int p=i;
      bool flag = false;
       indlen=0;
       int k = -1;

      for (int j = k+1; j < s.size(); j++)
      {
        if (s1[p] == s[j])
        {
          k = j;
          p+=1;
          indlen++;
        }
      }
      len=max(len,indlen);
    }
    cout << ans +s1.size()-len << endl;
  }
}