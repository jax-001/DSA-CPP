// leetcode :- 567
/*
    ip:- s1 = "eidbaooo"    s2 = "ab"
    op:- true
    explanation:- if any combination of s2 (i.e ab or ba) is present(but in contineuous manner) in s1 then return true otherwise false...
*/


// this is for 2 character string...for 3 or more character go to the next code...
#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>
using namespace std;

bool checkPermutation(string main, string part){
    int findInd = main.find(part);
    bool flag ;
    if(findInd >= 0 && findInd < main.length()){   // search for ab
        flag = true;
    }
    else flag = false;
    if(flag == false){     // search for ba
        reverse(part.begin(), part.end());
        findInd = main.find(part);
        if(findInd >= 0 && findInd < main.length()){
            return (true);
        }
        else return (false);
    }
    else return true;
}

int main(){
    string s1;
    cout << "Take input for the main string --> " ;
    getline(cin , s1);
    string s2;
    cout << "Take input for the part string --> " ;
    getline(cin , s2);

    cout << "Present or not --> " << checkPermutation(s1,s2) << endl;
    return 0;
}