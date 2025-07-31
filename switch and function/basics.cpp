#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    switch(n){
        case 1:    // here you can only take integer and character value...
                   // you can't take float and string here...
            cout << "first" << endl;
            break;
        case 2:
            cout << "second" << endl; 
            break;
        case 3:
            cout << "Third" << endl;
            break;
        case 4: 
            cout << "fourth" << endl;
            break;
        default: 
            cout << "It is deafault case" << endl;
    }
    return 0;
}