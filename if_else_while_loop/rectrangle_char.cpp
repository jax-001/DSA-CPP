#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int row = 1;
    int ch = 65;
    while ( row <= n ){
        int col = 1;
        while ( col <= n ){
            printf("%c ", ch );
            col ++;
        }
        ch ++;
        row ++;
        cout << endl;
    }
    return 0;
}