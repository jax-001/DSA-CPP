#include<iostream>
using namespace std;
// Done by sir... (approach 3) after decimal...
double morePrecision(int n, int sqroot , int precision){
    double ans = sqroot;
    double factor = 1;
    for(int i = 0; i<precision; i++){
        factor = factor / 10;
        for(double j = ans; j*j < n; j += factor){
            ans = j;
        }
    }
    return ans;
}
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
    int precision;
    cout << "Enter the number precision you want to print(max = 5): " ;
    cin >> precision;
    cout << "The square root of the given number is: "<< morePrecision(n, sqroot, precision) << endl;
    return 0;
}