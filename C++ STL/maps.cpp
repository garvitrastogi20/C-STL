#include<bits/stdc++.h>
using namespace std;
void explainMap()
{
    //map is a data structure or a container which stores value
    //it contains a key and a value
    // key always stores unique values
    //map stores everything in respect of keys and values
    //key and values can be of any datatype
    //map also stores unique keys in sorted order on the basis of key

    map<int, int> m;
    //here first int represents key and another one represents value
    map<int ,pair<int, int>>m1;
    //here key is one integer and values are two integers
    map<pair<int,int>, int> m2;
    //here key is two integers and value is one integers

    m[1]=2;
    //it means that on key=1 store value= 2

    m.emplace(3,1);
    // it means 3 is the key and 1 is the value

    m.insert({2,4});
    // it means 2 is the key and 4 is the value

//    {
//        {1,2}
//        {2,4}
//        {3,1}
//    }
    //accessing map elements
    for(auto it :m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    cout<<m[1]<<endl;
    cout<<m[2]<<endl;
    cout<<m[3]<<endl;
    cout<<m[4]<<endl;

    auto it= m.find(3);
    cout << (*it).second << endl;

    auto it1=m.find(5);
    cout<<(*it1).second<<endl;

    m2[{2,3}]=4;
    // it means {2,3} is the key and 4 is the value

    auto it2= m.lower_bound(2);
    auto it2= m.upper_bound(3);


     
}

void explainMultimap()
{
    //all same as map but the difference is key can store multivalues
}
void explainUnorderedmap()
{
    // it stores only unique key value but it is not sorted
    
}

int main()
{
    explainMap();
    explainMultimap();
    explainUnorderedmap();

    return 0;
}