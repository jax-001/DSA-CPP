// question is on the main code...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check_vector(vector < int > vec){
    int count = 0; 
    int n = vec.size();
    for(int i = 0; i<n-1; i++){
        if(vec[i] > vec[i+1]){
            count ++;
        }
    }
    if(vec[n-1] > vec[0]){
        count ++;
    }
    return (count <= 1);
}

void take_input(vector < int > &vec, int size){
    for(int i = 0; i< size; i++){
        int store;
        cin >> store;
        vec.push_back(store);
    }
    return ;
}

int main(){
    vector < int > vec;
    int n;
    cout << "Enter the size of the vector --> ";
    cin >> n;
    cout << "Take input for the vector --> " << endl;
    take_input(vec, n);

    // check wheather the vector is rotated and sorted or not...
    bool flag = check_vector(vec);
    if(flag == false){
        cout << "The entered vector is not in sorted order." << endl;
    }
    else{
        cout << "The entered vector is in sorted order." << endl;
    }
    return 0;
}