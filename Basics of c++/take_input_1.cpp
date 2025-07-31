#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = cin.get();  
    // here you take anything input like :- any special character, white spaces , under score but it will return value according to declared data type.
    // here takes the ASCII value

    cin >> b;    
    // here you can only take input according to data type declared to variables

    cout << "value of a is " << a << endl; 
    cout << "value of b is " << b << endl;

    /*
    char a,b;
    a = cin.get();  
    // here you take anything input like :- any special character, white spaces , under score but it will return value according to declared data type.
    //but not all special characters..

    cin >> b;    
    // here you can only take input according to data type declared to variables

    cout << "value of a is " << a << endl; 
    cout << "value of b is " << b << endl;
    */
    return 0;
}