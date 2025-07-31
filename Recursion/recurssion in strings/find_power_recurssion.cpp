#include<iostream>
using namespace std;

int find_pow(int ans, int base, int power){

/* one solution with time complexity:- O(n)...
    if(power == 0) return 1;
    if(power == 1) return base;
    return base * find_pow(base, power-1);
*/

// another solution with time complexity:- O(log(power))

    if(power & 1){
        ans = ans * base;
    }
    base = base * base;
    power = power/2;
    if(power == 0) return ans;
    return find_pow(ans, base, power);


// anoter method...
/*
    if(power == 0) return 1;
    if(power == 1) return base;

    int ans = find_pow(base, power/2);   // this will work for 2 pasing value...
    if(power & 1) {
        return base * ans * ans;
    } 
    else{
        return ans * ans;
    }
*/


}

int main(){
    int b, p;
    cout << "Enter the base and power: " ;
    cin >> b >> p;

    int ans = 1;
    cout << "Power is: " << find_pow(ans, b, p) << endl;
    return 0;
}