// leetcode :- 240

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool findElem(vector < vector < int >> &vec , int key){
    int r = vec.size();
    int c = vec[0].size();

    int rowIndex = 0;
    int colIndex = c - 1;
    while((rowIndex < r) && (colIndex >= 0)){
        if(vec[rowIndex][colIndex] == key){
            return true;
        }
        if(vec[rowIndex][colIndex] < key){
            rowIndex ++;
        }
        else{
            colIndex--;
        }
    }

    return false;
}

int main(){
    vector < vector < int >> vec (5, vector < int > (5));
    vec = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {25, 28, 30, 34, 43}};

    int key;
    cout << "Enter the key you want to find: " ;
    cin >> key;

    bool find = findElem(vec, key);
    if(find == true){
        cout << "The key is present." << endl;
    }
    else cout << "The key is absent." << endl;
    return 0;
}