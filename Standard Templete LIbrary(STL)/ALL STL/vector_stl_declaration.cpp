#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector < int > v;   // normal declaration...
    
    // if you want to give the size of the vector, you can declare by this method...
    //syntax:- vector < data_type < name(size) ;
    vector < int > vec(5) ;   // let size = 5;
    // if you declare by this it will create a vector of size 5 and assign all spaces with 0

    // if we print this...
    for(int i:vec) {
        cout << i << " " ;
    }cout << endl;

    // we can also add the values ...(but all are same)
    vector < int > vt(4,1);  
    // this creates a vector of size = 4 and add assign all spaces with value 1...
    // if we print this...
    for(int i:vt){
        cout << i << " ";
    } cout << endl;

    // you can add values to a vector by this...
    // if you want to add extra values later you can use push_back() function..
    // syntax:- vector name. push_back(value);
    // ex:- tet.push_back(9);  it will add 9 at the end of the vector..
    vector < int > tet(5);
    tet = {2,3,5,6,7};
    cout << "tet is --> "<< endl;
    for(int i:tet) {
        cout  << i << " " ;
    }cout << endl;

    // suppose you want to copy vector tet to a new vector...
    // syntax:- vector < data_type > new vector name(old vector name) ;
    cout << "Copying vector tet to another vector" << endl;
    /*  you can copy like this...
    vector < int > pet;
    pet = tet;
    */
    // or you can copy like this...
    vector < int > pet(tet);
    for(int i:pet) {
        cout << i << " " ;
    }cout << endl;
    return 0;
}