// method 2...
#include<iostream>
using namespace std;
//use case...
// in small array or vectors...
// space complexity:- O(1)  no extra space required..
// Time complexity:- worst case = O(n^2) and Best case = O(n^2)
// unstable algorithim...
void selection_short_array(int arr[], int n){
    for(int i = 0 ; i<n-1; i++){
        int min_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
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