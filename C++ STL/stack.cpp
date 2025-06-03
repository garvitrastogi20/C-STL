#include<bits/stdc++.h>
using namespace std;
void explainStack()
{
    stack<int> s;
    //stack follows LAST IN FIRST OUT manner.
    s.push(10); //{10}
    s.push(20); //{ 20,10}
    s.push(30); // {30,20,10}
    s.push(40); //{40,30,20,10}
    s.emplace(50); //{50,40,30,20,10}
    cout<<s.top()<<endl; //it will give you the last value you have inserted

    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;
    // if stack is empty it will return 1 otherwise 0

    stack<int> s2;
    s.swap(s2);
    cout<<s2.top()<<endl;
    cout<<s.top()<<endl;
    
}
int main()
{
    explainStack();
}