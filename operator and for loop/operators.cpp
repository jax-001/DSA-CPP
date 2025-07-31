#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    // & | ~ ^     operators
    cout << "a&b is: " << (a&b) << endl;
    cout << "a|b is: " << (a&b) << endl;
    cout << "~a  is:" << (~a)  << endl;
    cout << "a^b is: " << (a^b) << endl;

    //left shift and right shift...
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;
    
    return 0;
}