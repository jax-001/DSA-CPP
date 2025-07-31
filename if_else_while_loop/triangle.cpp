#include<iostream>
using namespace std;
int main(){

/*
    int n;
    cout << "Enter the row number here: ";
    cin >> n;
    int row = 1;
    while(row <= n){
        int col1 = 1;
        int value = 1;
        int col2 = 1;
        int col3 = 1;
        int store = row-1;
        while( col1 < n-row+1 ){
            cout << " ";
            col1 ++;
        }
        while( col2 <=row ){
            cout << value;
            col2 ++;
            value ++;
        }
        while(col3 < row){
            cout << store;
            col3++;
            store --;
        }
        row ++;
        cout << endl;
    }

*/

    //you can do the above problem by this mentod also...
    int n;
    cout << "Enter the row number: ";
    cin >> n;
    int row = 1;
    while ( row <= n ){
        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }

        int j = 1;
        while ( j <= row){
            cout << j;
            j++;
        }

        int start = row - 1 ;
        while(start){
            cout << start;
            start --;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}