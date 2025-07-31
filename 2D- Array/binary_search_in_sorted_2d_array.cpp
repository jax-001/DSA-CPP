//leetcode:- 74

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findKey(vector < vector < int >> &vec, int r, int c, int key){
    int s = 0; 
    int e = (r * c) - 1 ; 
    int m = s + (e - s) / 2;
    while(s <= e){
        if(key == vec[m / c] [m % c]) return m;
        if(vec[m / c] [m % c] < key) s = m + 1;
        else e = m - 1;
        m = s + (e - s) / 2;
    }

    return - 1;
}

void takeinput(vector < vector < int >> &vec, int r, int c){
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> vec[i][j];
        }
    } 
    return ;
}

int main(){
    int r, c, key;
    cout << "Enter row and column size: " << endl;
    cin >> r;
    cin >> c;

    // take input...
    vector < vector < int >> vec(r, vector < int > (c));
    cout << "Take input for the vector" << endl;
    takeinput(vec, r, c);

    cout << "Enter the key which you want to find:- " ;
    cin >> key;
    
    int find = findKey(vec, r, c, key);
    if(find == -1){
        cout << "The key is absent in the matrix." << endl;
    }
    else{
        cout << "The key is present at the index no:- " << '(' << find / c << ',' << find % c << ')' << endl;
    }
    return 0;
}
