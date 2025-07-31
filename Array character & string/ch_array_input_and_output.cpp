#include<iostream>
using namespace std;
int main(){
    char ch[20];
    // to  take input ..
    cout << "Enter your name --> ";
    cin >> ch;
    // to print the out put...
    cout << "Your name is --> ";
    cout << ch;
    cout << endl;

    // there is a null character at the end of the value...
    // if we take biswajit ... after the 't' character of biswajit, '\0' automatically inserted at the end..
    // we take '\0' as the terminator...
    // but if we take biswajit sahoo as input and print the input...
    // it will only print biswajit (this is the limitation of this...)
    // cin stops reading when you give white spaces in between the input...
    // white spaces like:- spaces, tab(\t), newline(\n)...


    // length of a string...
    // by this way you can only find the total capacity of a character array...
    int length = sizeof(ch) / sizeof(char);
    cout << "Length of ch is --> " << length << endl;

    // to know the size of a string...
    int count = 0;
    for(int i = 0; ch[i] != '\0' ; i++){
        count ++;
    }
    cout << "The total size of the array is --> "<< count << endl;

    return 0;
}