#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of row: ";
    cin >> n;
    int row = 1;
    while( row <= n){
        int col = row ;
        while( col >= 1 ){
            cout << col;
            col --;
        } 
        row ++;
        cout << endl;
    } 
    return 0;
}