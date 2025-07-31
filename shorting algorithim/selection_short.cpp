// method 1...
#include<iostream>
#include<limits.h>
using namespace std;
void selection_short_array(int arr[], int n){
    for(int i = 0 ; i<n-1; i++){
        int min = INT_MAX;
        int min_index = -1;
        for(int j = i; j<n; j++){
            if(min > arr[j]){
                min = arr[j];
                min_index = j;
            }
            else continue;
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    return ;
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
    selection_short_array(arr, n);
    cout << "After shorting the array is: " << endl;
    printArray(arr,n);
    return 0;
}