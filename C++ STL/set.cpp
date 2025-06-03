#include<bits/stdc++.h>
using namespace std;

void explainSet()
{
    // SET is container that contain elements in a sorted manner and has unique elements
    set<int> st;
    st.insert(1);   //{1}
    st.insert(2);   //{1,2}
    st.insert(2);   //{1,2}
    st.emplace(3);  //{1,2,3}
    st.emplace(4);  //{1,2,3,4}
    st.emplace(4);  //{1,2,3,4}
    st.emplace(3);  //{1,2,3,4}

    //Functionality of insert in vectors can be used also
    //that only increases efficiency

    //begin(),end(), rbegin(), rend(), size(), empty(), swap()
    // all the above functions are same as that of above
    //set is maintained by a tree

    //find an element in a set

    auto it=st.find(3);
    cout<<*(it)<<endl;
    auto it1= st.find(5);
    cout<<*(it1)<<endl;

    //erasing an element in a set
    st.erase(4); //erase 5 and takes logarithmic time

    int cnt=st.count(2);
    cout<<cnt<<" ";
    // in this if the set contain 1 then it will display 1(no matter how many occurence while pushing because it contains unique values).
    // otherwise if it doesnot contain 1 then it will display 0
    //{1,2,3,4}
    auto it2 = st.find(2); //points to 2
    auto it3 = st.find(4); //points to 4
    st.erase(it1,it3); // it will erase all the values of 2 to 4 in which 4 is not included.
    //that means {1,4} is the set after erasing

    //lower_bound() and upper_bound() works in the same ways as it works with the vectors
}

void explainMultiset()
{
    // unlike set, multiset only obeys sorted property but don't obeys unique property
    //that means that multiset can stores duplicate elements too


    multiset<int> m;
    m.insert(1);  //{1}  
    m.insert(1);  //{1,1}  
    m.insert(1);  //{1,1,1}

    int cnt= m.count(1);
    cout<<cnt<<endl;
    m.erase(1); //erase all 1's  

    m.erase(m.find(1)); //it erases only one occurence of 1

    //rest all functions are same as that of sets


}

void explainUnorderedSet()
{
    unordered_set<int> us;
    //stores unique value but not stores them in unique manner
    //lower_bound and upper_bound does not works in it
    //rest all functions are same as in sets
    // it does not stores values in sorted so it has a better complexity than sets in most cases
    // in the most cases, complexity is O(1)
}
int main()
{
    explainSet();
    explainMultiset();
    explainUnorderedSet();

    return 0;

} 