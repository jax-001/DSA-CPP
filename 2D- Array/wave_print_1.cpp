// for non-sqare matrix...

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wave_print(vector < vector < int >> &arr, int r, int c){
    for(int i = 0; i<c; i++){
        for(int j = 0; j<r; j++){
            if( i&1 ){
                cout << arr[r-j-1][i] << " ";
            }
            else{
                cout << arr[j][i] << " " ;
            }
        }
        cout << endl;
    }
}

void takeInput(vector < vector < int >> &arr, int r, int c){
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j] ;
        }
    }
    return ;
}

int main(){
    int r,c;
    cout << "Enter the row and column size --> " ;
    cin >> r;
    cin >> c;

    vector < vector < int >> arr(r, vector < int > (c)); 
    cout << "Take input for the vector :- > " << endl;
    takeInput(arr, r, c);

    cout << "Wave print --> " << endl;
    wave_print(arr, r, c);
    return 0;
}