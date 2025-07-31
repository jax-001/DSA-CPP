/*   // modulous properties...
a MOD M  + b MOD M = (a + b) MOD M 
a MOD M - b MOD M = (a - b) MOD M 
a MOD M * b MOD M = (a * b) MOD M
*/

// question...
// find(X ^ N) MOD M 

// M <= 10 ^ 9 + 7 
// 1 <= X , N 

#include<iostream>
using namespace std;

int pow_mod(int x, int n, int m){
    int res = 1;
    while(n > 0){
        if( n&1 ){
            res = (1LL * res * (x)%m) %m ;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n >> 1;
    }

    return res;
}

int main(){
    int x , n, m;
    cout << "Enter the base and power " ;
    cin >> x >> n ;
    cout << "Enter the modulus " ;
    cin >> m;

    int ans = pow_mod(x, n, m);
    cout << "x ^ n MOD m is:- " << ans << endl;

    return 0;
}
