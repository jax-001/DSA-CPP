// Question:- N! MOD M 
// where N is user input and value of M  is 10^9 + 7

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int find_mod(int n){
    int store = 1;
    int m = 1000000007;    // we can use both (10^9 + 7) or (10^9 + 9) as modulo
    for(int i = 2 ; i<= n ; i++){
        store = (1LL * (store % m) * (i % m)) % m;  // 1LL is long long integer to avoid overflow condition...
    }

    return store;
}

int main(){
    int n;
    cout << "Enter the number--> " ;
    cin >> n;

    int ans =  find_mod(n);
    cout << "Mod of factorial of n is--> "<< ans << endl;
    return 0;
}