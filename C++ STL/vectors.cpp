#include<iostream>
#include<vector>//vector is a container which is dynamic in size
using namespace std;

void explainVector()
{
    vector<int> v; // declaration of a vector with a datatype. It creates an empty container
    v.push_back(1); // as the container is empty, this function will push 1 into it. and now it becomes{}->{1}
    v.emplace_back(2);
    // this function dynamically increases its size and pushes 2 at its back.
    // emplace_back is generally faster than push_back
    //{} -> {1} -> {1,2}

    //defining vector of a pair datatype
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(2,3); // do not need curly braces

    // emplace_back is different from push_back in case of syntax also

    vector<int> a(5,100);
    //{100,100,100,100,100}
    //this means it has size of 5 containing 5 instances of 100

    vector<int> b(5);
    // this will create a container of size 5 with 5 instances of 0 or any garbage value depending of compiler

    vector<int> v1(5,20); //{20,20,20,20,20};
    vector<int> v2(v1);  //{20,20,20,20,20}
    // it is not the original v1 container but it will display a copy of v1 container
    // after declaring the size as in above syntaxes we can increase the size dynamically by using push_back/emplace_back function




    // how to access elements in a vector
    vector<int> m={1,2,3,4,5};
    cout<<m[0]<<" "<<m[1];
    //or we can access it with
    cout<<m.at(0);
    cout<<endl;



    //USING AN "ITERATOR " TO ACCESS VECTOR ELEMENTS

    vector<int> v3={1,2,6,4,8};
    vector<int>:: iterator it= v3.begin();
    //v.begin points to the location in the memory
    //in vectors element are stored in a contiguous memory locations
    it++;
    cout<<*(it)<<" ";

    //also we can use v.back to print last value
    cout<<v3.back()<<" ";
}

int main()
{
    explainVector();
    return 0;
}