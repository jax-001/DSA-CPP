#include<iostream>
#include<cstring>   // to manupulate character stings with inbuilt functions...
using namespace std;
int main(){
    // inbuilt functions...
    char arr1[20];
    char arr2[23];

    // to compare two character array...
    int flag = strcmp(arr1, arr2);              // '1' means:- flase and '0' means :- true
    cout << "flag is: " << flag << endl;
    cout << "arr1[0] is: " << arr1[0] << endl;

    // to find length...
    int size = strlen(arr1);
    cout << "size is: " << size << endl;

    // to copy arr2 into arr1...
    strcpy(arr1, arr2);
    cout << "arr1 is: " << arr1 << endl;

    // but in string you can just simply use '=' operator...
    // suppose you have to copy str1 into str2
    // str2 = str1      
    // thats all...
    return 0;
}