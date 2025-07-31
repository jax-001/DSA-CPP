#include<iostream>
using namespace std;

bool checkSort(int *arr , int size){
    if(size == 0) return true;
    if(arr[size] < arr[size - 1]){
        return false;
    }
    checkSort(arr, size - 1);
}

int main(){

    // test cases...
    //int arr[6] = {2, 4, 6, 9, 11, 13};
    //int arr[6] = {5, 7, 9, 2, 10, 23};
    int arr[6] = {9, 3, 6, 8, 12, 14};

    bool flag = checkSort(arr,5);
    //bool slag = checkSort(srr);

    if(flag == true){
        cout << "Arr is in sorted order." << endl;
    }
    else{
        cout << "Arr is not in sorted order." << endl;
    }
    return 0;
}