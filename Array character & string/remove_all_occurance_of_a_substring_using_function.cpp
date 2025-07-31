// question is on previous question...

#include<iostream>
#include<string>
using namespace std;

string removeOccurance(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
        // s.find(part) returns the first index of left most occurance of the part string...
        // syntax for erase function:- s.erase(starting, ending);
    }
    return s;
}

int main(){
    string str;
    cout << "Enter your string --> " ;
    getline(cin , str);
    string part;
    cout << "Enter the part string --> " ;
    getline(cin , part);
    cout << "After removal of all parts --> " << removeOccurance(str, part) << endl;
    return 0;
}