#include<iostream>
#include<deque>      // deque library...
using namespace std;
int main(){

    // in deque you can add elements from both front and back side to the array...
    // it is a dynamic array means you can change the size of the array...

    // syntax:- deque <data_type> name;
    deque < int > d;
    // to add element from front and back you can do the following...
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    for(int i:d){
        cout << i << " " ;
    }cout << endl;

    // to delete element from front and back we can use pop() 
    d.pop_back();
    cout << "After pop from back: " << endl;
    for(int i:d) {
        cout << i << " " ;
    }cout << endl;
    d.pop_front();
    cout << "After pop from front: " << endl;
    for(int i:d){
        cout << i << " " ;
    }cout << endl;

    //you can access any element by using at() function...
    cout << "The element at index-1 is : " << d.at(1) << endl;

    // you can also print the first and last element using front() and back() function...
    cout << "The first element of the array is: " << d.front() << endl;
    cout << "The last element of the array is: " << d.back() << endl;

    // we can use size() function to determine the size of the deque..
    cout << "The size of the deque is: " << d.size() << endl;

    // we can't define the capacity of the deque using capacity() function. This will show error...
    //cout << "The capacity of the function is: " << d.capacity() << endl;

    // we can check the deque is empty or not using empty() function...
    cout << "Empty or not: " << d.empty() << endl;


    // we can erase an element or group of elements(contigueout manner) using erase() function...
    cout << "Before erase deque is: " << endl;
    for(int i:d) {
        cout << i << " " ;
    }cout << endl;
    // syntax:- name.erase(starting iterator, end iterator) ;
    // go down you can understand well..
    d.erase(d.begin() , d.begin()+1);
    cout << "After erase deque is: " << endl;
    for(int i:d ){
        cout << i << " " ;
    }cout << endl;



    // experiment in erase function...

    deque < int > deq ;
    deq = {1,2,3,4,5,6,7,8} ; 
    cout << "Size of the deque is: " << deq.size() << endl;
    cout << "After erase of 1st 2 elements: " << endl;
    // this is how we can erase elements from front...
    deq.erase(deq.begin(), deq.begin()+2);
    for(int i:deq) {
        cout << i << " " ;
    }cout << endl;

    // we can also erase elements from end of the deque...
    // we have to use end() functin here...
    deq.erase(deq.end()-2 , deq.end());
    cout << "After erase of last 2 elements the deque is: " << endl;
    for(int i:deq){
        cout << i << " ";
    }cout << endl;

    deq.push_back(9);
    deq.push_back(10) ;
    deq.push_back(11);
    // here you can also delete a specific element from any side...
    // let from we have to erase 2nd index element form front side..
    cout << "Before erase: " << endl;
    for(int i:deq){
        cout << i << " " ;
    }cout << endl;
    deq.erase(deq.begin()+2);
    cout << "After erase of 2nd index: " << endl;
    for(int i:deq){
        cout << i << " " ;
    }cout << endl;
    // from back side 2nd index...
    deq.erase(deq.end()-2);  // here the 2nd element from the end will be deleted...
    for(int i:deq){
        cout << i << " " ;
    }cout << endl;

    // if we use only this... this will erase the first element... same for the end() function...
    deq.erase(deq.begin());
    for(int i:deq){
        cout << i << " " ;
    }cout << endl;
    return 0;
}