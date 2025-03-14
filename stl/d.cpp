#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d)
    cout<<i<<" ";
    cout<<endl;
    cout<<d.at(0);
    cout<<endl;
    d.pop_front();//for removing single element
     for(int i:d)
    cout<<"new deque is"<<i<<" ";
    cout<<endl;
    d.push_front(2);
     for(int i:d)
    cout<<i<<" ";
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);//erasing multiple elements
     for(int i:d)
    cout<<i<<" ";


}