#include<bits/stdc++.h>
using namespace std;
// queue->    FIFO(FIRST IN FIRST OUT)
int main()
{
    queue<int> q;
    q.push(1);   //first element of the queue
    q.push(2);   // inserted after the first element as in normal queue.
    q.push(3);
    q.push(4);
    q.emplace(5); // same as push function

    q.pop(); // first element is poped according to first in first out

    // accessing queue elements
    queue<int> temp= q;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl; 
    cout<<q.back()<<endl; //gives the last element of the queue inserted
    q.back()+=5;
    cout<<q.back()<<endl;
    queue<int> temp1= q;
    while(!temp1.empty())
    {
        cout<<temp1.front()<<" ";
        temp1.pop();
    }
    cout<<endl;
    cout<<q.front()<<endl; //gives the first element of the element 
    return 0;


        //size swap empty same as that of stack 
        //in queue all the operations are handling in constant time O(1).
}

