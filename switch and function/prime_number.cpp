#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i<n ; i++){
        if(n % i == 0){
            return 0;   // not prime number...
        }
    }
    return 1;   //prime number...
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPrime(n)){
        cout << "The entered number is prime." << endl;
    }
    else cout << "The entered number is composite" << endl;
    return 0;
}