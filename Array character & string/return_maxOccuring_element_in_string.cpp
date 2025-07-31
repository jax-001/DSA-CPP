/*  only character string (upper case and lower case) and no special symbols  and numbers...
    Ip :- test          Op:- t
    Ip :- testsample    Op:- e     if same, it will take the last one...
*/

#include<iostream>
using namespace std;

char maxOccurance(string str){
    int arr[26] = {0};    // for all letters in alphabets...
    int number = 0;
    for(int i = 0; i<str.length() ; i++){
        char ch = str[i];
        //for lower case...
        if( ch >= 'a' && ch <= 'z' ){
            number = ch - 'a';       // mapping a to z as 0 to 25...
        }
        else{ // for upper case...
            number = ch - 'A';
        }
        arr[number]++;
    }

    // to find maximum form array...
    int maxi = -1;
    int ans = -1;
    for(int i = 0; i<26 ; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }

    // find character...
    return ('a' + ans) ;
}

int main(){
    string str;
    getline(cin , str);
    cout << "Max Occuring Element is --> " << maxOccurance(str) << endl;
    return 0;
}