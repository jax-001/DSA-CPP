#include<iostream>
using namespace std;
// Done by sir... (approach 2)
int squareRoot(int n){
    int s = 0;
    int e = n;
    long long int m = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e){
        long long int sq = m * m;
        if(sq == n) return m;
        if(sq < n){
            ans = m ; 
            s = m + 1;
        }
        else e = m - 1;
        m = s + (e - s) / 2;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter a numbr: " ;
    cin >> n;
    int sqroot = squareRoot(n);
    cout << "The square root of the given number is: "<< sqroot << endl;
    return 0;
}