#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int store = 0;
    while(n != 0){
        int digit = n % 10;
        if(store > INT_MAX/10 || store < INT_MIN/10){
            return 0;
        }
        store = (store * 10) + digit;
        n = n/10;
    }
    cout << store <<endl;
    return 0;
}