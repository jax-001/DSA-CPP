// here the string s(says) is case sensitive...
// means :- lower case != upper case
// a != A      like this...

#include<iostream>
using namespace std;

bool palindrome(char ch[], int size){
    int s = 0;
    int e = size - 1;
    while(s<e){
        if(ch[s++] != ch[e--]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int size_of_array(char ch[]){
    int count = 0;
    for(int i = 0; ch[i] != '\0' ; i++){
        count ++;
    }
    return count;
}
int main(){
    char ch[100];
    cout << "Take input --> ";
    cin >> ch;
    int size = size_of_array(ch);
    cout <<  "check for palindrome --> " << palindrome(ch , size) << endl;
    return 0;
}