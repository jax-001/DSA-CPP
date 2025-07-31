// transform the 2d vector...

// for non-sqare matrix... for online coding... but it is not for vs code due to it prints differently...
// go for wave_print_1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArr(vector < vector < int >> arr , int r, int c){
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    return ;
}

void storeInArr(vector < vector < int >> &arr , vector < int > ans , int r, int c){
    int ind = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            arr[i][j] = ans[ind++];
        }
    }
    return ;
}

void take_input(vector < vector < int >> &arr, int r, int c){
    for(int i = 0; i<r ; i++){
        for(int j = 0; j < c ; j++){
            cin >> arr[i][j];
        }
    }
    return ;
}

vector < int > waveChange( vector < vector < int >> &arr, int r, int c){
    vector < int > ans;
    for( int col = 0; col < c; col ++){
        
        // for odd col >> bottom to top...
        if( col & 1 ){
            for(int row = r - 1; row >= 0 ; row --){
                ans.push_back(arr[row][col]);
            }
        }
        // for even col >> top to bottom...
        else{
            for(int row = 0; row < r; row ++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main(){
    int r,c;
    cout << "Enter the row and column size --> " ;
    cin >> r;
    cin >> c;

    vector < vector < int >> arr(r, vector < int > (c)); 

    cout << "Take input for the vector --> " << endl;
    take_input(arr, r, c);

    vector < int > answer = waveChange(arr,r,c);
    storeInArr(arr, answer, r, c);
    printArr(arr,r,c);
    return 0;
}