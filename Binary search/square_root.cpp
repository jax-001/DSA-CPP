#include<iostream>
using namespace std;
// Done by me...(approach 1)
int find_squareRoot(int mid , int store, int n){
    long long int m = mid + (store - mid) / 2;
    while( mid <= store){
        int x = m + 1;
        if(m*m <= n && x*x > n) return m;
        if(m * m < n){
            mid = m + 1;
        }
        else store = m - 1;
        m = mid + (store - mid) / 2;
    }
}
int squareRoot(int n){
    long long int mid = n / 2;   // long long int taken to lie the mid * mid value within range of 2 ^ -31 to 2 ^ 31 
    int store;
    while(mid * mid > n){
        store = mid;
        mid = mid / 2;
    }
    int sqroot = find_squareRoot(mid , store , n);
    return sqroot;
}
int main(){
    int n;
    cout << "Enter a number: " ;
    cin >> n;
    int sq = squareRoot(n);
    cout << "The sqare root of the given number is: " << sq << endl;
    return 0;
}