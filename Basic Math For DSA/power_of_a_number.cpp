#include<iostream>
using namespace std;

int find_pow(int a, int b){
    int res = 1;
    while(b > 0){
        if(b&1) {
            res = res * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return res;
}

int main(){
    int a, b;
    cout << "Enter the base and power: " ;
    cin >> a >> b;
    int ans = find_pow(a,b);
    cout << "The value of a ^ b is: " << ans << endl;
    return 0;
}