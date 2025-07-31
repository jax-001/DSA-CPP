#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void takeInput(vector < int > &vec, int size){
    if(size == 0){
        cout << "You can't enter any data inside the vector." << endl;
        return;
    }
    for(int i = 0; i<size ; i++){
        int data;
        cin >> data;
        vec.push_back(data);
    }
    return ;
}

void printArray(vector< int > &vec){
    for(const auto& i:vec){
        cout << i << " ";
    }
    cout << endl;
    return;
}

void sortArray(vector < int > &vec, int size){
    if(size == 0 || size == 1) return;

    for(int i = 0; i<size-1; i++){
        if(vec[i] > vec[i+1]){
            swap(vec[i], vec[i+1]);
        }
    }

    sortArray(vec, size-1);
    
    return;
}

int main(){
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector < int > vec;
    cout << "Take input for the vector: " << endl;

    takeInput(vec, n);
    sortArray(vec, n);
    printArray(vec);

    return 0;
}