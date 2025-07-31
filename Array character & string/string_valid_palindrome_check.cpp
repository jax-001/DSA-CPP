/*
rule:-1  only consider the alphanumeric values ( a - z && A - Z and 0 - 9)
input:- "A man, a plan, a canal: Panama"
output:- "amanaplanacanalpanama" is a valid palindrome
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkPalindrome(string s){
    for(int i = 0 , j = s.length() - 1 ; i<j ; i++ , j--){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}

string convertUppercaseToLowercase(string s){
    string ans = "";
    for(int i = 0; i<s.length() ; i++){
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a';
            ans.push_back(ch);
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}

string removeSpecialChar(string s){
    string ans = "";
    for(int i = 0; i<s.length() ; i++){
        char ch = s[i];
        if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
            ans.push_back(ch);
        }
        else continue;
    }
    return ans;
}

int main(){
    string str;
    cout << "Take input for the string --> " ;
    // this is the way you can take input so that the compiler will ignore the newlline characters or whitespaces..
    // syntax:- getline( input stream , variable name);
    getline(cin , str);

    /*
    Additional case:- if you want to read some thing specific...means upto that character..
    for example:- ip --> "hey rama, you are nice".
    you want to read upto ','  .. then you can add a 'delimiter'  at the end of the syntax...
    syntax:- getline( input stream, variable name, delimiter);
    code:- getline(cin , str, ',');
    */ 


    // remove special characters...
    str = removeSpecialChar(str);
    cout << endl;
    cout << "After removal of special characters --> "<< str << endl;
    cout << endl;

    str = convertUppercaseToLowercase(str);
    cout << "After converting upper case to lower case --> " << str << endl;
    cout << endl;

    bool flag = checkPalindrome(str);
    if(flag == true){
        cout << "The entered string is a valid palindrome." << endl;
    }
    else{
        cout << "The entered string is not a valid palindrome. " << endl;
    }
    return 0;
}
