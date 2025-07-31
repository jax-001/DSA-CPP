// you have to count all prime numbers in between 2 given numbers...

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int find_prime(int a , int b){
    int cnt = 0;     // to count the total number of prime numbers...
    vector < bool > prime((b-a)+1, true);
    prime[0] = prime[prime.size()-1] = false;    // starting and ending are excluded...
    int final = sqrt(b);
    for(int i = 2 ; i <= final ; i++){
        for(int j = i * 2; j<b ; j+=i){
            if(j > a){
                prime[j-a] = false ;
            }
        }
    }

    for(const auto& i : prime){
        if(i == true){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int a, b;
    cout << "Enter the number within which you want to find the prime numbers: " ;
    cin >> a >> b;    // take input like b > a. 
    
    int ans = find_prime(a,b);
    cout << "Total number of primes in between " << a << " and " << b << " is --> " << ans << endl;
    return 0;
}