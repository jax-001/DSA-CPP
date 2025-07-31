#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    char op;
    cout << "Enter the operation you want to perform: "<< endl;
    cin >> op;
    switch(op){
        case '+':
            cout << "a+b is: " << (a+b) << endl;
            break;
        case '-':
            cout << "a-b is : " << (a-b)<< endl;
            break;
        case '*' :
            cout << "a*b is: " << (a*b) << endl;
            break;
        case '/' :
            cout << "a/b is: " << (a/b) << endl;
            break;
        case '%':
            cout << "a%b is: " << (a%b) << endl;
            break;
        default: 
            cout <<"You have entered a wrong operator." << endl ;  

    }
    return 0;
}