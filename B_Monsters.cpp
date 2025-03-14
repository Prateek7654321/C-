#include <bits/stdc++.h>
using namespace std;
class compr
{
public:
    bool operator()(pair<int, int> p1, pair<int, int> p2)//comparator jo chota h jo abhi daala 
    {
        if (p1.first > p2.first)
            return false;
        else if (p1.first == p2.first)
        {
            if (p1.second < p2.second)
                return false;
            else
                return true;
        }
        else
            return true;
    }
} ;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<pair<int, int>> values;
        for (int i = 0; i < v.size(); i++)
        {
            values.push_back({v[i], i + 1});
        }
        

       for(int i=0;i<values.size();i++)
       {
        int x=values[i].first;
        if(x<=m)
        continue;
        else{
            int k=x%m;
            if(k==0)
            values[i].first=m;
            else
            values[i].first=k;
        }
       }
       priority_queue<pair<int,int>,vector<pair<int,int>>,compr>pq;

       for(int i=0;i<values.size();i++)
       {
        pq.push(values[i]);
       }
       while(pq.size()!=0)
       {
        pair<int,int>p=pq.top();
        cout<<p.second<<" ";
        pq.pop();
       }
       cout<<endl;
    }
}