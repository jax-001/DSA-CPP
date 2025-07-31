// question is on previous problem..
// leetcode - 443
#include<iostream>
#include<string>
using namespace std;
int checkOccurance(string str){
    int i = 0;
    int ansIndex = 0;
    int n = str.length();
    
    while(i<n){
        int j = i+1;
        while(j<n && str[i] == str[j]){
            j++;
        }
        str[ansIndex++] = str[i];
        int count = j - i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch: cnt){
                str[ansIndex++] = ch;
            }
        }
        i = j;
    }
    str.resize(ansIndex);   // this resize the string to given value..
    cout << str << endl;
    return ansIndex;
}
int main(){
    string str;
    cout << "Take the input for the string :-> " ;
    getline(cin, str);
    int size = checkOccurance(str);
    cout << "Size of the new string is :-> " << size << endl;
    return 0;
}