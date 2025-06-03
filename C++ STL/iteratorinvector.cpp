#include<iostream>
#include<vector>
using namespace std;

void usingforloopforaccess()
{
    vector<int> v={1,5,6,9,8};
    for(vector<int>:: iterator it=v.begin();it!=v.end();it++)
    // vector<int>::iterator it=v.begin() ->starting point for for loop
    //it!=v.end() -> denoting to execute till the iterator not reaches v.end();
    //it++-> incremented by 1
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;


    // using auto which automatically defines the datatype of the iterator
    for(auto it=v.begin(); it!= v.end();it++)
    {
        cout<<*(it)<<"  ";
    }
    cout<<endl;



    //using for each loop
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}

void explainingVectorIterator()
{
    vector<int> v={1,2,6,4,8};
    vector<int>:: iterator it= v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";
    //v.begin points to the starting


    vector<int>::iterator it1= v.end();
    it--;
    cout<<*(it)<<" ";
    // v.begin does not point to the last value of the container.
    // It points to the exactly next to the last value of the container.
    //that's why we use it--;


    //v.rend(); rend= reverse end which will points to exactly before the begining
    //v.rbegin(); reverse begin= it will point to the last value of the vector
    // we have to use reverese_iterator for rend and rbegin
    vector<int> :: reverse_iterator it2= v.rbegin();
    cout<<*(it2);
    cout<<endl;


}

void erasinginvector(){
    vector<int> v={2,8,96,3,7};
    v.erase(v.begin()+1);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.begin()+2);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
}

void insertfunctioninvector()
{
    vector<int> v(2,100);
    for(auto it :v)
    {
        cout<<it<<" "; 
    }
    cout<<endl;
    v.insert(v.begin(),2,500);
    for(auto it :v)
    {
        cout<<it<<" "; 
    }
    
}

void copyonevectortoother()
{
    //used when we have to insert an vector in some other vector
    vector<int> v={100,20,3,1,5};
    vector<int> copy(2,50);
    vector<int> copy1(3,30);
    //v.insert(v.begin(), copy.begin(),copy.end());
    v.insert(v.begin()+1, copy.begin(), copy.end());
    for(auto it:v)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
    cout<<v.size()<<endl; //give the size of the current vector
    v.pop_back(); //remove the last element of the vector
    for(auto it:v)
    {
        cout<<it<<"  ";
    }
    cout<<endl;

    vector<int> v1= {1,2};
    vector<int> v2={3,4};
    for(auto it:v1)
    {
        cout<<it<<" ";
    }cout<<endl;
    for(auto it:v2)
    {
        cout<<it<<" ";
    }cout<<endl;
    v1.swap(v2); 
    // it swaps the name of the vectors
    for(auto it:v1)
    {
        cout<<it<<" ";
    }cout<<endl;
    for(auto it:v2)
    {
        cout<<it<<" ";
    }cout<<endl;

    v1.clear(); // it empty the entire vector by deleting the values inside the vectors
    for(auto it:v1)
    {
        cout<<it<<" ";
    }cout<<endl;

    cout<<v2.empty();
    cout<<endl;
    // 0->not empty
    //1-> empty

    cout<<v1.empty();

}
int main()

{
    //explainingVectorIterator();
    //usingforloopforaccess();
    //erasinginvector();
    //insertfunctioninvector();
    copyonevectortoother();
}