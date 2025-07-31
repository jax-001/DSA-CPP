#include<iostream>
using namespace std;

void swap_array(int n, int arr[]){
    for(int i = 0; i<n; i+=2){
        if(i >= n-1) break;
        // int temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;

        // here is an inbuilt function to swap..
        swap(arr[i], arr[i+1]);
    }
    return ;
}

void printArray(int n, int arr[]){
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    return ;
}

void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return ;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter value for arr[]: ";
    int arr[100];
    take_input(n,arr);
    cout << "Before swap arr[]: "<< endl;
    printArray(n,arr);
    //swap two number: 
    swap_array(n,arr);
    cout << endl;
    cout << "After swap: " << endl;
    printArray(n, arr);
    return 0;
}