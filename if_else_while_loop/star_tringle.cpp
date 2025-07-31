#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter row number: ";
    cin >> n ;
    int row = 1;
    while ( row <= n ){
        int col = 1;
        int col2 = 1;
        while(col2 < row){
            cout << " ";
            col2 ++;
        }
        while ( col <= n- row + 1 ){
            cout << "*";
            col ++; 
        }
        row ++;
        cout << endl;
    }
    return 0;
}