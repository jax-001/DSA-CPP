/*
Like array, in vectors the values are stored in contigueous memory locations.
but the main difference is the capacity. In array you can't add values beyond the 
size of the array. But in case of vector you can add values..and you can decrease the size also...
Example:- let the size of the vector is 4, and you have to add 5 elements. When you add 5th element
          the vector creats a new vector with double of it's current size, and copy all the elements
          and delete the old vector...
*/
#include<iostream>
#include<vector>   // vector library..
using namespace std;
int main(){
    // we can declare a vector by following...
    // syntax:- vector < data type > name;
    vector < int > v;

    // we can define the total capacity of the vector using capacity function...
    // size means:- how many elements are present in the vector
    // capacity means:- what is the total memory allocated by the vector...
    cout << "Capacity --> " << v.capacity() << endl;

    // we can add elements using    push_back() function...
    // there is no push_front() function for vector...
    v.push_back(1) ; 

    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(2) ; 
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(3) ;
    // here it will print 4, due to in sufficient capacity and it double its size to add the element..
    cout << "Capacity --> " << v.capacity() << endl;
    // if we print the size it will print 3
    cout << "Size --> " << v.size() << endl;

    // we can use at()  function here also..
    cout << "Element at 2nd index: " << v.at(2) << endl;

    // we can use front() and back() function either..
    cout << "first element:- " << v.front() << endl;
    cout << "Last element:- " << v.back() << endl;

    // we can also remove the last element by using pop_back() function...
    cout << "Before pop: " << endl;
    for(int i = 0; i<v.size() ; i++){
        cout << v[i] << " " ;
    } cout << endl;
    cout <<"Before pop capacity: " << v.capacity() << endl;

    v.pop_back();

    cout << "After pop: " << endl;
    for(int i = 0; i<v.size() ; i++){
        cout << v[i] << " " ;
    } cout << endl;
    cout << "After pop capacity: " << v.capacity() << endl;   // capacity will reamain the same only size decrease...

    // we can also print the vector by following...
    // you can use this to print any container like array, vector etc..
    // here in every iteration i takes the value of vector...
    // here the range is same as the vector...
    cout << "Another print method: " << endl;
    for(int i:v){
        cout << i << " " ;
    } cout << endl;

    // we can use clear() function to clear all the elements from the vector...
    // here only size changes not the capacity...
    cout << "Before clear, the size of the vector is: " << v.size()<< endl;
    cout << "Before clear, the capacity of the vector is: " << v.capacity()<< endl;
    cout << endl;
    v.clear() ;
    cout << "After clear, the size of the vector is: " << v.size() << endl;
    cout << "Before clear, the capacity of the vector is: " << v.capacity()<< endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Before insert --> " << endl;
    for(auto i:v){
        cout << i << " " ;
    }cout << endl;

    // lets we have to insert 10 at index --> 2
    // we can insert any value at any position in a vector, using insert()
    v.insert(v.begin() + 2 , 10);

    cout << "After insert --> " << endl;
    for(auto i:v){
        cout << i << " " ;
    }cout << endl;

    return 0;
}