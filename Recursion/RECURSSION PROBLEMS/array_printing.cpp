#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    if(n < 0) return;
    printArray(arr, n-1);
    cout << arr[n] << " ";
}

int main(){
    int n;
    cout << "Enter the size of the array:  " ;
    cin >> n;
    int arr[100];
    cout << "Take input for the array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Printing the array with recurssion: " << endl;
    printArray(arr, n-1);
    
    return 0;
}