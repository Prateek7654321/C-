#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
     v.push_back(2);
    cout<<v.capacity()<<endl;
     v.push_back(3);
    cout<<v.capacity()<<endl;//tells us the capacity of vector
    cout<<v.size()<<endl;//tells us the no elements in vector
    cout<<"element at second index"<<v.at(2)<<endl;  // element at any index
    cout<<"element at front is"<<v.front()<<endl; //element at starting 
      cout<<"element at end is"<<v.back()<<endl; //element at ending
    v.pop_back();//remove last element
    cout<<"size is"<<v.size()<<endl;
    cout<<"capacity is"<<v.capacity()<<endl;
    for(int i:v)
    {
      cout<<i<<" ";
    }cout<<endl;
    // copying one vector to another
    vector<int>last(v);
    for(int i:last)
    {
      cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
