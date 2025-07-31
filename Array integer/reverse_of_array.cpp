#include<iostream>
using namespace std;
void printArray(int n, int arr[]){
    for(int i = 0 ; i<n; i++){
        cout << arr[i] << " " ;
    }
    return ;
}

void reverse(int n, int arr[]){
    for(int i = 0; i < n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    return ;
}
void take_input(int n , int arr[]){
    for(int i = 0 ; i<n; i++){
        cin >> arr[i];
    }
    return;
}
int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[200];
    cout << "Enter values for arr[] :" << endl;
    take_input(n,arr);
    // print array..
    cout << "Before the reverse: " << endl;
    printArray(n,arr);

    // to reverse...
    reverse(n, arr);

    //print array../
    cout << endl;
    cout << "After reverse..." << endl;
    printArray(n, arr);
    return 0;
}