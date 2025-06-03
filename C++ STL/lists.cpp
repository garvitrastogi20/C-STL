#include<iostream>
#include<list>
using namespace std;
int main()
{
    //List is a container same as vector but it is a doubly linked list.
    //sequence container that allows non-contiguous memory allocation.
    list<int> l;  // it will create a list of integers
    l.push_back(1); //add 1 to the end of the list
        for(auto it:l){
            cout<<it<<" ";  // print each element in the list
        }
    cout<<endl;

    l.push_back(3);
    for(auto it:l){
        cout<<it<<" ";  // print each element in the list
    }cout<<endl;
    
    l.emplace_back(4);
    for(auto it: l)
    {
        cout<<it<<"  ";
    }cout<<endl;


    // the main difference in the list and vectors is the: emplace_front() function and push_front() function.
    l.push_front(5);
    for(auto it: l)
    {
        cout<<it<<"  ";
    }cout<<endl;

    l.emplace_front(6);
    for(auto it: l)
    {
        cout<<it<<"  ";
    }
    cout<<endl;



    // all other functions are same as of vectors
    //rbegin, rend, insert, copy, erase, swap, empty
    return 0;
}
