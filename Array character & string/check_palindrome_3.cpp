//rule:-1    the string is not case sensitive...check palindrome
//rule:-2    ignore the special characters and only consider numbers and alphabets..
//Ex:- Ip = 5?a6@6?A5    OP = true

#include <iostream>
#include <cstring>
using namespace std;

string removeSpecialChar(string s){
    string ans = "";
    for(int i=0 ; i < s.length() ; i++){
        char ch = s[i];
        if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch<=57)){
            ans += ch;
        }
    }
    return ans;
}

string convertToLowerCase(string s){
    for(int i=0 ; i < s.length() ; i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
    }
    return s;
}

bool checkPolindrome(string s){
    int len = s.length();
    for(int i=0 ; i < len/2 ; i++){
        if(s[i] != s[len-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    // string s = "a$0G#g0A";
    string s = "5?a6@6?A5";
    cout<<s<<endl;
    s = removeSpecialChar(s);
    cout<<s<<endl;
    s = convertToLowerCase(s);
    cout<<s<<endl;

    if(checkPolindrome(s))
        cout<<"The String is polindrome"<<endl;
    else
        cout<<"The String is not polindrome"<<endl;
    return 0;
}