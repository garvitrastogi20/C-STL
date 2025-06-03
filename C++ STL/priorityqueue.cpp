#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;  // declaration of the priority queue
    // it pushes element and stores them such that
    // which has highest value are stored as first element
    // or we can say that pq stores elements in descending order


    // in priority queue, insertion and deletion-> log n
    // in priority queue, top ->  O(1)

    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(10);    //{10,5,2}
    pq.emplace(20); //{20,10,5,2}
    pq.emplace(1);  //{20,10,5,2,1}


    cout<<pq.top()<<endl;

    //accessing priority queue elements

    priority_queue<int> temp= pq;
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;

    //size swap empty same as others

    
    //building min heap or priority queue that has minimum value at the top
    //minimum priority queue

    priority_queue<int ,vector<int> , greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(10);
    pq1.emplace(3);

    cout<<pq1.top()<<endl;
    priority_queue<int, vector<int> , greater<int>> temp1=pq1;
    while(!temp1.empty())
    {
        cout<<temp1.top()<<"  ";
        temp1.pop();
    }cout<<endl;

    return 0;
}   