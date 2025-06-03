#include<iostream> //input/output library
#include<math.h>  // to include all the mathematic algorithms
#include<string.h> // all the libraries in string we have to give string.h
 // but this will waste a lot of time if we include all the libraries one by one so instead we use one library which invclude all
#include<bits/stdc++.h> // this library consists of all the libraries 

using namespace std; // it is used to reduce name conflicts

void print() // does not have any return value.
{
    cout<<"Garvit"<<endl;
}

int sum(int a, int b) // have a return value
{
    return a+b;
}

int main()
{
    print();
    int s=sum(1,2);
    cout<<s;
    // print 3
    return 0;
}