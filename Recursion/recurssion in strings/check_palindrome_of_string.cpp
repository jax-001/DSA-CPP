#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkPalindrome(string str, int s , int e){
    if(str[s] != str[e]) return false;
    if(s >= e) return true;
    return checkPalindrome(str, s+1, e-1);
}

int main(){
    string str;
    cout <<"Enter the data for the string: ";
    getline(cin , str);

    bool flag = checkPalindrome(str, 0, str.length()-1);
    if(flag == false){
        cout << "The entered string is not a palindrome." << endl;
    }
    else{
        cout << "The entered string is a palindrome." << endl;
    }
    return 0;
}