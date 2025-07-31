#include<iostream>
using namespace std;
int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main(){
    /*
    Normal method...

    int a,b;
    cout << "Enter the base value: ";
    cin >> a;
    cout << "Enter the power of a is: ";
    cin >> b;

    int ans = a;
    for(int i = 1; i<b; i++){
        ans = ans * a ;
    }
    cout << "a ^ b is : "<< ans << endl;

    */

    int a,b;
    cout << "Enter the value of base and power: ";
    cin >> a >> b;
    int answer = power(a,b);
    cout << "Power of a^b is: "<<answer << endl;
    return 0;
}