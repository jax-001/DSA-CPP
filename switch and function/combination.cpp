#include<iostream>
using namespace std;
int fact(int n){
    int temp = 1;
    for(int i = 1; i<=n; i++){
        temp = temp * i;
    }
    return temp;
}
int nCr(int n, int r){
    int a = fact(n);
    int b = fact(r) * fact(n-r);
    int factorial = a/b;
    return factorial;
}
int main(){
    int n,r;
    cout<< "Enter the value of n and r: "<< endl;
    cin >> n >> r;
    int ans = nCr(n,r);
    cout << "The value of nCr is: " << ans << endl;
    return 0;
}