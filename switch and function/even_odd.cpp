#include<iostream>
using namespace std;
bool isEven(int n){
    if(n&1){
        return true; //or return 1;  //for odd
    }
    return false; //or return 0;  //for even
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isEven(n)){
        cout << "The number is odd" << endl;
    }
    else cout << "The number is even" << endl;
    return 0;
}