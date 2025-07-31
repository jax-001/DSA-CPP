#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the row and column: ";
    cin >> n;
    int i = 1, count = 1;
    while ( i <= n ){
        int j = 1;
        while ( j <= n ){
            cout << count ;
            j++;
            count ++;
        }
        i++;
        cout << '\n';
    }
    return 0;
}