#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the row: ";
    cin >> n;
    int i = 1;
    while ( i <= n ){
        int j = 1;
        while ( j <= i ){
            cout << "*" ;
            j++;
        }
        i++;
        cout << '\n';
    }
    return 0;
}