/*

    ex: if a = 2 , b = 3
        a = 1 0          // binary form 
        b = 1 1
        then output = 3      // total number of 1

*/
#include<iostream>
using namespace std;
int find(int n){
    int count = 0;
    while(n != 0){
        int bit = n&1;
        if(bit == 1) count++;
        n = n >> 1;
    }
    return count;
}
int count_bit(int a, int b){
    int x = find(a);
    int y = find(b);
    return x + y;
}
int main(){
    int a,b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    int ans = count_bit(a,b);
    cout << "Total number of set bits are: " << ans << endl;
    return 0;
}