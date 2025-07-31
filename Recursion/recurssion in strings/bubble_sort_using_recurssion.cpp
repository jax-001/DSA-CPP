#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArray(vector < int > &vec){
    for(int i = 0; i<vec.size() ; i++){
        cout << vec[i] << " " ;
    }cout << endl;
    return ;
}

void take_input(vector < int > &vec, int size){
    if(size <= 0){
        cout << "There is not enough space to enter." << endl;
    }
    for(int i = 0; i < size ; i++){
        int data;
        cin >> data;
        vec.push_back(data);
    }
    return ;
}


void sortRemaining(vector < int > &vec , int i, int j){
    if(j == vec.size()-1-i) return;
    if(vec[j] > vec[j+1]){
        swap(vec[j] , vec[j+1]);
    }
    sortRemaining(vec, i, j+1);
}

void sortArray(vector < int > &vec, int i, int j){
    if(i == vec.size()-1) return;
    sortRemaining(vec, i, j);
    //j = 0;    // this is not required because in every function call it creates a copy of j...the j value remains same every time...
    sortArray(vec, i+1, j);

    return;
}


using namespace std;
int main(){
    int n;
    cout << "Enter the size of the vector: " << endl;
    cin >> n;

    vector < int > vec;
    cout << "Take input the vector: " << endl;
    take_input(vec, n);

    int i = 0, j = 0;
    sortArray(vec, i, j);

    printArray(vec);

    return 0;
}