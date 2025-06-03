#include<bits/stdc++.h>
using namespace std;

//sorting arrays:
//sort(a,a+n)
//suppose we have an array a[4]={1,5,3,2}
//we said sort{a,a+4}; a+4 is the value next to end so it will sort till end
//it sorts till one value before the end given



//sorting vectors
//sort(v.begin(), v.end());
//same as arrays as explained above


//to sort a given portion we can use syntax
//sort(a+2,a+4);



// to sort in descending order we can use
// sort(a,a+n, greater<int>)
// it will sort in descending order

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second<p2.second)  return true;
    if(p1.second<p2.second)  return false;
    //if they are same
    if(p1.first>p2.first) return true;
    return false;
}

int main()
{
    pair<int,int> a[] = { {1,2}, {2,3}, {4,2} };
    // now the condititon is we have to sort it according to the second element
    // and if second element is same then we have to sort according to first element but in descending order

    //sort(a,a+n,comp);
    //{(4,2),(1,2),(2,3)}
    //here is comp is a boolean function
    int num=7;
    int cnt= __builtin_popcount(num);
    //__builtin_popcountll says how many 1's or set bits are there in its binary form
    cout<<cnt<<endl;

    long long num1=465852235789;
    int cnt1=__builtin_popcountll(num1);
    cout<<cnt1<<endl;
    // for long long datatype,__builtin_popcountll() is used.


    //find permutations of a string
    string s=" 123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));



    //finding max element in an array
    int arr[]={ 1,2,68,6,77,5,6,9};
    int maxi=*max_element(arr, arr+5);
    cout<<maxi<<endl;


     

    return 0;
}