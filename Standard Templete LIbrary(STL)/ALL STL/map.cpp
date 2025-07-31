#include<iostream>
#include<map>
// in map there are keys and values...
// each key is unique means there is no key which is pointing to two values at the same time...
// and two key can't have the same name....
// but two keys can point to the same value...
using namespace std;
int main(){

    // declaration....
    // syntax:- map < key data_type , value data_type > name;
    map < int , string > m ;
    // m[key] = value;  
    m[1] = "biswajit";
    m[10] = "Bubuna" ;
    m[2] = "bikash" ;
    m[3] = "soumya" ;

    //you can declare also in the following way..
    // syntax:- m.insert({key,value});
    m.insert({5,"Rakesh"});
    m.insert({6,"Cherry"});
    m.insert({7, "Gulsan"});

    // to print ...
    // this will print in shorted order but only the key values...
    for(auto i:m){
        cout << i.first << " " ;
    }cout << endl;


    // here you can also find any value using count() function...
    // it returns in boolean value...
    cout << "5 is present or not --> " << m.count(5) << endl;
    cout << "13 is present or not --> " << m.count(13) << endl;

    // erase function...
    cout << "Before erase --> " << endl;
    for(auto i:m){
        cout << i.first << " ";
    }cout << endl;

    m.erase(m.begin());   // in this way you can only erase the 1st value of the map...
    // we can erase like this...
    // m.erase(key);  
    // ex:- m.erase(10);    
    cout << "After erase of the first variable..." << endl;
    for(auto i:m){
        cout << i.first << " " ;
    }cout << endl;
    
    map < int , string > :: iterator itr = m.begin();   // in this way you can erase any value form the map...
    itr ++;
    m.erase(itr);
    cout << "After erase  --> " << endl;
    for(auto i:m){
        cout << i.first << " " ;
    }cout << endl; cout << endl;

    // you can print both key and value at the same time...
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    //find() returns the iterator of that perticular element...
    auto it = m.find(5);
    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << " " << (*i).second << endl;
    }cout << endl;

    // insert, erase, find, count 
    // time complexity :- O(logn)   
    return 0;
}
