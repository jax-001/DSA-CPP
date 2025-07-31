#include<iostream>
using namespace std;

void reverse_string(char ch[] , int size){
    for(int i = 0, j = size-1 ; i<j ; i++, j--){
        swap(ch[i], ch[j]);
    }
    return ;
}

int main(){
    char ch[100];
    cout << "Take your input : ";
    cin >> ch;

    // length of the array...
    int count = 0;
    for(int i = 0; ch[i] != '\0' ; i++){
        count ++;
    }
    // reverse a string...
    cout << "Before reverse --> " << ch << endl;
    reverse_string(ch , count);
    cout << "After reverse --> " << ch << endl;
    return 0;
}
