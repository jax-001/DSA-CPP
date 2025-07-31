#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the row number: ";
    cin >> n;
    int row = 1;
    char value = 'D' ;
    while ( row <= n ){
        char ch = value - row + 1;
        int col = 1;
        while ( col <= row ){
            cout << ch ;
            ch++;
            col ++; 
        }
        row ++;
        cout << endl;
    }
    return 0;
}