#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the row number: ";
    cin >> n;
    int row = 1; 
    while ( row <= n ){
        int col1 = n - row ;
        int col2 = 1;
        while( col1 >= col2){
            cout << " ";
            col1--;
        }
        while(col2 <= row){
            cout << "*";
            col2++ ;
        }
        row ++;
        cout << endl;
    }
    return 0;
}