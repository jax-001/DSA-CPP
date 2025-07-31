//sieve of Eratosthenus theorum...
// solve leetcode:- 204

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter the number within which you want to find no of prime numbers: " ;
    cin >> n;

    vector < bool > prime(n+1, true);
    prime[0] = prime[1] = false;
    
    int cnt = 0;
    for(int i = 2; i < n ; i++){
        if(prime[i]){
            cnt++;
            for(int j = i * 2; j < n ; j+=i){
                prime[j] = false;
            }
        }
    }

    cout << "Total number of prime number is: " << cnt << endl;
    return 0;
}