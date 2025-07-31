#include<iostream>
#include<list>    // library for list..
using namespace std;
int main(){

    /*
    In list you don't have the direct asses to any element of an index
    unless you have to travell throuth the list to asses that element...
    */

    // to declare a list we have to do the following...
    // syntax:- list <data_type> name;
    list < int > l ;
    l = {1,2,3,4,5,6,7};

    // to add other value you can use push() ..
    l.push_back(8);
    l.push_front(0);
    for(int i:l) {
        cout << i << " " ;
    }cout << endl;

    // we can use pop() function..
    l.pop_back();
    l.pop_front();
    cout << "After pop() function..." << endl;
    for(int i:l){
        cout << i << " " ;
    }cout << endl;

    // you can also erase values form both sides...
    cout << "Before erase: " << endl;
    for(int i:l){
        cout << i << " " ;
    }cout << endl;
    l.erase(l.begin());  // you can't do l.begin()+2, because you don't have the direct asses...
    cout << "After erase: " << endl;
    for(int i:l){
        cout << i << " " ;
    }cout << endl;

    // we can also determine the size of the list..
    cout << "The size of the list is: " << l.size() << endl;

    // to copy this list "l" to another list we have to do the following...
    list < int > n(l);
    cout << "New list \"n\" is:" << endl;
    for(int i:n){
        cout << i << " " ;
    }cout << endl;

    // we can also initialize a list like this...
    list < int > p(5);    // here 5 indicates the size of the list , it add 0 to all allocated spaces...
    for(int i:p) {
        cout << i << " " ;
    }cout << endl;

    // but if we intitalize like this 
    list < int > u(5,1);  // it will create 5 spaces and give all spaces value 1...
    for(int i:u){
        cout << i << " " ;
    }cout << endl;
    return 0;
}