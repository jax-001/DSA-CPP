#include<iostream>
using namespace std;

int fibona(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibona(n-1) + fibona(n-2);
}

int main(){
    int n;
    cout << "Enter the nth term of fibonacci series: ";
    cin >> n;
    int fibo = fibona(n);
    cout << "Nth fibonacci series is: " << fibo << endl;
    return 0;
}