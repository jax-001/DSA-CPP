#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    while ( n != 0){
        int i = n&1 ;
        cout << i << " ";
        n = n >> 1; 
    }
    return 0;
}