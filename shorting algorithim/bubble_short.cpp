// method 1...
#include<iostream>
#include<stdbool.h>
using namespace std;
// stable algorithim...
// time complexity:- O(n^2)   worst case:- O(n^2)  and best case:- O(n)
// space complexity:- O(1)
void bubble_short(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        bool flag = false;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
    return;
}
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return ;
}
int main(){
    int n;
    cout << "Enter array size: " ;
    cin >> n;
    int arr[100];
    cout << "Take value for array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Before short the array is: " << endl;
    printArray(arr,n);
    cout << endl;
    bubble_short(arr,n);
    cout << "After shorting the array is: " << endl;
    printArray(arr,n);
    return 0;
}