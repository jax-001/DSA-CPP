#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// for square matrix...
void printMatrix(vector < vector < int >> arr, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
}

void wave_print(vector < vector < int >> arr, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if( i&1 ){
                cout << arr[i][n-j-1] << " " ;
            }
            else {
                cout << arr[i][j] << " " ;
            }
        }
        cout << endl;
    }
    return ;
}

void transpose_matrix(vector < vector < int >> &arr, int n){
    for(int i = 0 ; i<n; i++){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(j>i){
                    swap(arr[i][j], arr[j][i]);
                }
            }
        }
    }
    return ;
}

void take_input(vector < vector < int >> &arr , int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    return ;
}

int main(){
    int n;
    cout << "Enter the size of the matrix: " ;
    cin >> n;
    vector < vector < int >> arr (n, vector < int > (n));   // 2-d vector declaration...
    cout << "Take input for the array:- " << endl;
    take_input(arr,n);

    cout << "After transpose,  printing the matrix --> " << endl;
    transpose_matrix(arr,n);
    printMatrix(arr, n);
    cout << "After the wave print --> " << endl;
    wave_print(arr,n);

    return 0;
}