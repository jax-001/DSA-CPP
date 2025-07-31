#include<iostream>
using namespace std;
int main(){
    int array[15]; // this will take any garbage value...
    int srr[15] = {0};  // by this you can initialize entire array with 0
    int trr[15] = {1};   // but this will not initialize the entire array with 1, that case is only valid in case of 0
    int n = 15;
    for(int i = 0 ; i<n; i++){
        //cout << array[i] << " ";
        //cout << srr[i] << " ";
        cout << trr[i] << " ";
    }
    return 0;
}