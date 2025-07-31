#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n :";
    cin >> n;

/*
    int row = 1;
    while ( row <= n ){
        int value = row;
        int col = 1;
        while( col <= row ){
            cout << value ;
            col ++;
            value ++;
        }
        row ++;
        cout << endl ;
    }

*/

// we can do this it in another way without taking value..
    int row = 1;
    while ( row <= n ){
        int j = row;
        while ( j < 2*row ){
            cout << j ;
            j++;
        }
        row = row + 1;
        cout << endl;
    }
    return 0;
}