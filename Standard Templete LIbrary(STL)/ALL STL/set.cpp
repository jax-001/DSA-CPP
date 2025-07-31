#include<iostream>
#include<set>
using namespace std;
int main(){

    /*
    In set all unique elements are stored. suppose you entered 5 four times but it will store 5 only once...
    And also you can't modify the entered data, you can only delete that data..
    If you pop out elements then it will come in shorted order...
    It is bit slower than unorder set...
    Time complexity:- O(logn)
    */
    
    // declaration...
    set < int > s;

    // to insert value...
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(2);

    // printing.... this will print in shorted order...
    for(auto i:s){    // here "auto" key word allows compiler to automatically deduce the type of the variable stored in set...
        cout << i << " ";
    }cout << endl;

    // size 
    cout << "The size of the set before insert of duplicate value --> " << s.size() << endl;

    // if we insert some duplicate value then lets see what will happen..
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    for(auto i : s){
        cout << i << " " ;
    }cout << endl;

    //size..
    cout << "The size of the set after insert of duplicate value --> " << s.size() << endl;

    // asses of elements...
    //cout << "Element at index 2 --> " << s.at(2) << endl;     can't use at()

    // delete element..
    cout << "Before erase the set is --> " << endl;
    for(auto i:s ) {
        cout << i << " " ;
    }cout << endl;
    s.erase(s.begin());   // here you can delete one element at a time....
    cout << "After erase the set is --> " << endl;
    for(auto i : s){
        cout << i << " " ;
    }cout << endl;
    
    // but if you want to delete from inside of the set, then you have to declare the iteration outside of the erase function...
    set < int > :: iterator it = s.begin();   // here "it" is variable name...
    it++;     // now the set is 2 5 6 , and it points to 5...
    s.erase(it);   // it removes 5 from the set...  now the set has only 2,6...
    s.insert(5);
    s.insert(7);
    s.insert(8);
    s.insert(9);

    // before checking count, print the set
    cout << "Current elements in the set: ";
    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;  // This will show the current elements in the set.


    // count() function....  it shows the value is present or not inside the set...
    cout << "6 is present or not --> "<< s.count(6) << endl;  // now the set is 2,6.. so 6 is present at the set..

    // find() returns the reference of the element if it is present at the set....
    // here set <int > :: iterator    declares the iterator type that is integer... 
    // if the value you want to find is not present at the end then it will return the end value...
    set < int > :: iterator itr = s.find(6);   // present case  // here itr reference the position of the element...

    for(auto it = itr; it != s.end() ; it++ ){
        cout << *it << " " ;
    }cout << endl;

    // insert, find , erase, count 
    // above all functions have the time complexity O(logn)...

    // size , begin, end, empty
    // above function have the time complexity O(1)...

    return 0;
}