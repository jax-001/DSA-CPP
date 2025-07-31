/*
    i/p :-  1 2 3 
            4 5 6
            7 8 9
    op:-    1 2 3 6 9 8 7 4 5
*/  
// hw do it leter.....

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printReverseOdd(vector < vector < int >> &arr, int i ,  int r, int c){
    vector < vector < int >> srr(r - i - 1, vector < int > (c));
    // continue from here...
}

void spiralPrint(vector < vector < int >> &arr , int r, int c){
    int count = 0;
    for(int i = 0; (i<r) && (count <= (r*c)) ; i++){
        if(i == 0){
            for(int j = 0; j<c; j++){
                cout << arr[i][j] << " " ;
            }
        }
        else{
            if( i & 1 ){
                arr.erase(arr.begin());
                printReverseOdd(arr,i, r, c);
            }
            else{
                //printReverseEven(arr,i,r,c);
            }
        }
    }
    return ;
}

void takeInput(vector < vector < int >> &arr , int r, int c){
    for (int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    return ;
}

int main(){
    int r, c;
    cout << "Enter the row and column size of the matrix: " ;
    cin >> r;
    cin >> c;

    // 2d vector declaration...
    vector < vector < int >> arr ( r , vector < int > (c));
    cout << "Take input for the array : " << endl;
    takeInput(arr, r, c);

    // spiral print...
    spiralPrint(arr,r,c);
    return 0;
}