// gcd(a,b) = gcd(a-b, b)
/// here a > b

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findGcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    while(a != b){
        if(a < b){
            b = b - a;
        }
        else{
            a = a - b;
        }
    }
    return a;
}

int main(){
    int a, b;
    cout << "Enter two numbers: " ;
    cin >> a >> b;

    int gcd = findGcd(a,b);
    cout << "The gcd of two entered number is: " << gcd << endl;
    return 0;
}