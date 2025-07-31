// this code is for he can take 3 steps at time...
#include<iostream>
using namespace std;

int countways(int n){
    if(n == 0) return 1;
    if(n < 0) return 0;
    return countways(n-1) + countways(n-2) + countways(n-3);
}
int main(){
    int n;
    cout << "Enter the number of stairs: " << endl;
    cin >> n;
    int ways = countways(n);
    cout << "Total number of ways are: " << ways << endl;
    return 0;
}