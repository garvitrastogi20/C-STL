#include<bits/stdc++.h>
using namespace std;
void explainDeque()
{
    deque<int> d={10,20,30,40,50,60};
    d.push_back(70);
    d.emplace_back(80);
    d.push_front(0);
    d.emplace_front(-10);
    for(auto it: d)
    {
        cout<<it<<" ";
    }cout<<endl;

    // above all functions are same as vectors and lists
    // new functions of deque are below: 
    d.pop_back();
    for(auto it: d)
    {
        cout<<it<<" ";
    }cout<<endl;

    d.pop_front();
    for(auto it: d)
    {
        cout<<it<<" ";
    }cout<<endl;

    cout<<d.back()<<endl;
    cout<<d.front()<<endl;
    
}
int main()
{
    explainDeque();
}