#include<iostream>
using namespace std;
int ari(int n){
    int temp = 0;
    temp = (3 * n) + 7 ;
    return temp;
}
int main(){
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    int ans = ari(n);
    cout <<"nth arithmatic progression is: " << ans << endl;
    return 0;
}