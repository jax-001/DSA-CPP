/*
    jagged array is having different colum size according to the row number..
    Ex:-
        1 2
        3 4 5
        6 7 8 9
        4 3 
        1 6 4 7 2 8
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , m;
    cout << "Enter the number of rows of the array: " ;
    cin >> n;

    int size[100];    // to store the size of the jagged array...
    // creating in the heap memory...
    int **arr = new int* [n];
    for(int i = 0; i<n ; i++){
        cout << "Enter the column size of the row:" << i + 1 << " :  ";
        cin >> m;
        size[i] = m;
        arr[i] = new int[m];
    } 

    cout << "Take input for the jagged array: " << endl;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j<size[i] ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the jagged array: " << endl;
    // printing of a jagged array: 
    for(int i = 0; i<n ; i++){
        for(int j = 0; j < size[i] ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
