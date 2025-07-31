#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while(n!=0){
        int bit = n&1;
        count += bit;
        n = n >> 1;
    }
    if(count == 1){
        cout << "Enter number is power of 2." << endl;
    }
    else cout << "Enter number is not power of 2" << endl;
    return 0;
}