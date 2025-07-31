#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSpiral(vector < int > ans){
    for(const auto& elem : ans){
        cout << elem << " " ;
    }cout << endl;
}

void spiralPrintMatrix(vector < vector < int >> arr , int r, int c){
    int count = 0;
    int total = r * c;
    vector < int > ans;
    // index iniatialization...

    int minRow = 0;
    int minCol = 0;
    int maxRow = r - 1;
    int maxCol = c - 1;

    while(count < total){
        // for 1st row...
        for(int i = minCol ; i <= maxCol ; i++){
            ans.push_back(arr[minRow][i]);
            count ++;
        }
        minRow ++;
        if(count >= total) break;

        // for ending col...
        for(int i = minRow ; i <= maxRow ; i++){
            ans.push_back(arr[i][maxCol]);
            count ++;
        }
        maxCol--;
        if(count >= total) break;

        // for ending row...(reverse)
        for(int i = maxCol ; i >= minCol ; i--){
            ans.push_back(arr[maxRow][i]);
            count ++;
        }
        maxRow --;
        if(count >= total) break;

        // for 1st row...(reverse)
        for(int i = maxRow ; i >= minRow ; i--){
            ans.push_back(arr[i][minCol]);
            count ++;
        }
        minCol ++;
    }

    printSpiral(ans);
    return ;
}

void takeInput(vector < vector < int >> &arr, int r, int c){
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    return ;
}

int main(){
    int r,c;
    cout << "Enter the row and col size of the matrix:- > " ;
    cin >> r;
    cin >> c;

    vector < vector < int >> arr(r, vector < int > (c));
    cout << "Take input for the vector --> " << endl;
    takeInput(arr, r, c);

    spiralPrintMatrix(arr,r,c);
    return 0;
}