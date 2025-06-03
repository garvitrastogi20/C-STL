#include<iostream>
using namespace std;


 // a pair can only contain two values only

void explainPair()
{
    pair<int ,int>p={1,2};
    cout<<p.first<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    //nested pairs
    pair<int, pair<int,int>> s={1,{2,3}};
    cout<<s.first<<endl;
    cout<<s.second.first<<endl;
    cout<<s.second.second<<endl;

    // we cannot print a pair directly by cout<<s;

    //arrays in pairs, lies inside the utility library
    pair<int ,int>arr[]={{1,2},{2,3},{3,4}}; //index start from 0
    cout<<arr[0].second<<endl;
}
int main()
{
    explainPair();
}
