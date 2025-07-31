#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the row number: ";
    cin >> n;
    int row = 1;
    int space = 2;
    while ( row <= n ){
        int j = 1;
        while( j <= n-row+1){
            cout << j;
            j ++;
        }
        int star = 1;
        if(star < row){
            while( star <= space){
                cout << "*" ;
                star ++;
            }
            space += 2 ;
        }
        int i = n-row+1;
        while(i){
            cout << i;
            i--;
        }
        row ++;
        cout << endl;
    }

    return 0;
}