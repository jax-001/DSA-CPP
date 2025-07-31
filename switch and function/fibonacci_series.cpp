#include<iostream>
using namespace std;
void fibona(int n){
    int a = 0;
    int b = 1;
    int store = a;
    for(int i = 1; i<=n-2; i++){
        store = a + b;
        a = b;
        b = store;
    }
    cout << "nth fibonacci number is: " << store << endl ;
    return;
}
int main(){
    int n;
    cout << "Enter which number you want to print: ";
    cin >> n;
    fibona(n);
    return 0;
}