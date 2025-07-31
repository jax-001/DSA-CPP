// here the string s(says) is not case sensitive...
// means :- lower case == upper case
// a == A      like this...

#include<iostream>
#include<string.h>
using namespace std;

bool check_palindrome(char str[], int size){
    int count = 0;
    int st = 0;
    int e = size - 1;
    while(st < e){
        int store;
        int begin = (int)str[st];
        int end = (int)str[e];
        if(begin >= end){
            store = begin - end;
        }
        else{
            store = end - begin;
        }
        if((store == 0) || (store == 32)){
            count ++;
        }
        st++;
        e--;
    }
    if(count == size/2){
        return (true);
    }
    else return (false);
}

int size_of_string(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0' ; i++){
        count ++;
    }
    return count ;
}

int main(){
    char str[100];
    cout << "Take input for the string --> " ;
    cin >> str;
    int size = size_of_string(str);
    
    // check palindrome..
    cout << "Check palindrome or not --> " << check_palindrome(str, size) << endl;
    return 0;
}