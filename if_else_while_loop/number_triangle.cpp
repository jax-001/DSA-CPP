#include<iostream>
using namespace std;
int main(){
    int  n;
    cout << "Enter the row number: ";
    cin >> n;
    int row = 1;
    int value = 1;
    while ( row <= n ){
        int col1 = 1;
        int col2 = value;
        while( col1 < row ){
            cout << " ";
            col1 ++;
        }
        while ( col2 <= n ){
            cout << col2;
            col2 ++;
        }
        row ++;
        value ++;
        cout << endl;
    }  
    return 0;
}