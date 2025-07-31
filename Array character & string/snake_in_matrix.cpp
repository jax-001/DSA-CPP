// leetcode :- 3248

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void take_input(vector < string > &vec , int n){
    for(int i = 0; i<=n ; i++){
        string s ;
        getline(cin, s);
        vec.push_back(s);
    }
    return ;
}

int snakeIn( int s, int (*arr)[100] , vector < string > v){
    int row = 0;
    int col = 0;
    int store;
    for(const auto& path : v){
        if(path.compare("right") == 0 && ((row >= 0 && row < s) && (col >= 0 && col < s))){
            store = arr[row][++col] ;
        }
        else if(path.compare("down") == 0 && ((row >= 0 && row < s) && (col >= 0 && col < s))){
            store = arr[++row][col];
        }
        else if(path.compare("up") == 0 && ((row >= 0 && row < s) && (col >= 0 && col < s))){
            store = arr[--row][col];
        }
        else if(path.compare("left") == 0 && ((row >= 0 && row < s) && (col >= 0 && col < s))){
            store = arr[row][--col];
        }
    }
    return (store);
}

int main(){
    int n;
    cout << "Enter the row and column size: ";
    cin >> n;
    int arr[100][100];
    int count = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            arr[i][j] = count;
            count++;
        }
    }
    
    vector < string > vec;
    cout << "take input for the vector --> " << endl;
    take_input(vec , n); 

    int val = snakeIn(n, arr, vec);
    cout << "Now the snake is in the box --> " << val << endl;
    return 0;
}