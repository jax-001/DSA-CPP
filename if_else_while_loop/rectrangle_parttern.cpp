#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Enter the row size: ";
    cin >> r;
    cout << "Enter the column size: ";
    cin >> c;
    int i = 1;
    while( i <= r ){
        int j = 1;
        while( j <= c ){
            cout << "*";
            j++;
        }
        i++;
        cout << '\n' ;
    }
    return 0;
}