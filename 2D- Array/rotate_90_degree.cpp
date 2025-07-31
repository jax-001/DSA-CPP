#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printMatrix(vector < vector < int >> &arr, int n){
    for(const auto& row : arr){
        for(auto elem : row){
            cout << elem << " " ;
        }cout << endl;
    }
    return ;
}

void rotateMatrix90(vector < vector < int >> &arr, int n){
    // transpose of the matrix...
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(j > i){
                swap(arr[i][j] , arr[j][i]);
            }
        }
    }

    // reverse all the rows elements...
    for(int i = 0; i<n; i++){
        int maxCol = n - 1;
        int minCol = 0 ;
        for(int j = 0; j<n/2; j++){
            swap(arr[i][minCol] , arr[i][maxCol]);
            minCol ++;
            maxCol --;
        }
    }
    return ;
}

void takeInput(vector < vector < int >> &arr, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    return  ;
}

int main(){
    int n;
    cout << "Enter the size of the square matrix: " ;
    cin >> n;

    vector < vector < int >> arr(n, vector < int > (n));
    cout << "Take input for the matrix --> " << endl;
    takeInput(arr,n);

    rotateMatrix90(arr,n);
    printMatrix(arr,n);

    return 0;
}