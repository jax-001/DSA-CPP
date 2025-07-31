#include<iostream>
using namespace std;

char check_chr(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{// this will return in lower case...
        // let ch = 'D';     ch = 'D' - 'A' + 'a' = 'd'   
        ch = ch - 'A' + 'a';    
        return ch;
    }
}

bool check_palindrome(char str[], int size){
    int s = 0; 
    int e = size - 1;
    while (s<e){
        if(check_chr(str[s]) != check_chr(str[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int size_of_string(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0' ; i++){
        count ++;
    }
    return (count);
}
int main(){
    char str[100];
    cout << "Enter value of the string --> " << endl;
    cin >> str;
    // determine the size of the string...
    int size = size_of_string(str);

    // check for palindrome...
    cout << "Check for palindrome of not --> " << check_palindrome(str , size)  << endl;
    return 0;
}