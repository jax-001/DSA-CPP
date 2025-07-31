#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int remain = n % 10;
    int store = n ;
    int sum = 0 , mul = 1;
    while(store > 0){
        sum = sum + remain;
        mul = mul * remain;
        store = store / 10;
        remain = store % 10;
    }
    cout << "Sum of n natural numbers are: "<< sum << endl;
    cout << "Multiplication of n natural numbers are: "<< mul << endl;

    int total = mul - sum ;
    cout << "Total remaining = Mul - sum => "<< total << endl;
    return 0;
}
