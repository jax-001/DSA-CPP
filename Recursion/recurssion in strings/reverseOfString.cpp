/*
    input:- "abcde"
    output:- "edcba"
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseString(string s, int st, int e){
    if(st >= e){
        return s;
    }
    swap(s[st], s[e]);
    return reverseString(s, st+1 , e-1);
}

int main(){
    string s;
    cout << "Enter the string: " ;
    getline(cin , s);
    // int size = s.length();
    int st = 0;
    int e = s.length() - 1;

    cout << "Before: " << endl << s << endl;
    s = reverseString(s , st, e);
    cout << "After: " << endl << s << endl;

    return 0;
}